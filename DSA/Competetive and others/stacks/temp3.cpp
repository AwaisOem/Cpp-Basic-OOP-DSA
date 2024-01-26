// code for 3D donut animation in console 

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

// screen size
const int screen_width = 120;
const int screen_height = 40;

// field of view
const float fov = 3.14159 / 4.0;

// camera position
const float camera_z = 3.0;

// camera rotation
float camera_angle = 0.0;

// screen buffer
wstring screen(screen_width * screen_height, L' ');

// depth buffer
float depth_buffer[screen_width * screen_height];

// 3D point
struct vec3d {
    float x, y, z;
};

// 3D triangle
struct triangle {
    vec3d p[3];
    wchar_t sym;
    float z;
};

// 3D mesh object
struct mesh {
    vector<triangle> tris;

    bool load_from_file(const string& filename) {
        // local cache of verts
        vector<vec3d> verts;

        FILE* f = nullptr;
        f = fopen(filename.c_str(), "r");
        if (f == nullptr) {
            return false;
        }

        while (true) {
            char line[128];
            int res = fscanf(f, "%s", line);
            if (res == EOF) {
                break;
            }

            if (strcmp(line, "v") == 0) {
                vec3d v;
                fscanf(f, "%f %f %f", &v.x, &v.y, &v.z);
                verts.push_back(v);
            }

            if (strcmp(line, "f") == 0) {
                int f[3];
                fscanf(f, "%d %d %d", &f[0], &f[1], &f[2]);
                f[0]--; f[1]--; f[2]--;
                triangle t;
                t.p[0] = verts[f[0]];
                t.p[1] = verts[f[1]];
                t.p[2] = verts[f[2]];
                t.sym = L' ';
                tris.push_back(t);
            }
        }

        fclose(f);
        return true;
    }
};

// 3D point projection
vec3d project(const vec3d& v) {
    vec3d r;
    r.x = 1.0 + v.x / (v.z + camera_z);
    r.y = 1.0 - v.y / (v.z + camera_z);
    r.z = v.z;
    return r;
}

// 3D triangle projection
triangle project(const triangle& t) {
    triangle r;
    r.p[0] = project(t.p[0]);
    r.p[1] = project(t.p[1]);
    r.p[2] = project(t.p[2]);
    r.sym = t.sym;
    r.z = (t.p[0].z + t.p[1].z + t.p[2].z) / 3.0;
    return r;
}

// 3D triangle rasterization
void draw_triangle(const triangle& t) {
    // bounding box
    int min_x = screen_width;
    int max_x = 0;
    int min_y = screen_height;
    int max_y = 0;

    for (int i = 0; i < 3; i++) {
        if (t.p[i].x < min_x) min_x = t.p[i].x;
        if (t.p[i].x > max_x) max_x = t.p[i].x;
        if (t.p[i].y < min_y) min_y = t.p[i].y;
        if (t.p[i].y > max_y) max_y = t.p[i].y;
    }

    // clamp bounding box
    if (min_x < 0) min_x = 0;
    if (max_x >= screen_width) max_x = screen_width - 1;
    if (min_y < 0) min_y = 0;
    if (max_y >= screen_height) max_y = screen_height - 1;

    // fill triangle
    for (int x = min_x; x <= max_x; x++) {
        for (int y = min_y; y <= max_y; y++) {
            // barycentric coordinates
            float w0 = ((t.p[1].y - t.p[2].y) * (x - t.p[2].x) + (t.p[2].x - t.p[1].x) * (y - t.p[2].y)) /
                ((t.p[1].y - t.p[2].y) * (t.p[0].x - t.p[2].x) + (t.p[2].x - t.p[1].x) * (t.p[0].y - t.p[2].y));
            float w1 = ((t.p[2].y - t.p[0].y) * (x - t.p[2].x) + (t.p[0].x - t.p[2].x) * (y - t.p[2].y)) /
                ((t.p[1].y - t.p[2].y) * (t.p[0].x - t.p[2].x) + (t.p[2].x - t.p[1].x) * (t.p[0].y - t.p[2].y));
            float w2 = 1.0f - w0 - w1;
        
            // check if point is inside triangle
            if (w0 >= 0 && w1 >= 0 && w2 >= 0) {
                // depth test
                float z = w0 * t.p[0].z + w1 * t.p[1].z + w2 * t.p[2].z;
                int index = y * screen_width + x;
                if (z < depth_buffer[index]) {
                    depth_buffer[index] = z;
                    screen[index] = t.sym;
                }
            }
        }
    }
}

// 3D mesh rasterization
void draw_mesh(const mesh& m) {
    for (auto& t : m.tris) {
        draw_triangle(project(t));
    }
}

// 3D mesh rotation
void rotate_mesh(mesh& m, float x, float y, float z) {
    for (auto& t : m.tris) {
        for (int i = 0; i < 3; i++) {
            // rotation around x axis
            float y1 = t.p[i].y * cosf(x) - t.p[i].z * sinf(x);
            float z1 = t.p[i].y * sinf(x) + t.p[i].z * cosf(x);
            t.p[i].y = y1;
            t.p[i].z = z1;

            // rotation around y axis
            float x1 = t.p[i].x * cosf(y) + t.p[i].z * sinf(y);
            float z2 = -t.p[i].x * sinf(y) + t.p[i].z * cosf(y);
            t.p[i].x = x1;
            t.p[i].z = z2;

            // rotation around z axis
            float x2 = t.p[i].x * cosf(z) - t.p[i].y * sinf(z);
            float y2 = t.p[i].x * sinf(z) + t.p[i].y * cosf(z);
            t.p[i].x = x2;
            t.p[i].y = y2;
        }
    }
}

// 3D mesh translation
void translate_mesh(mesh& m, float x, float y, float z) {
    for (auto& t : m.tris) {
        for (int i = 0; i < 3; i++) {
            t.p[i].x += x;
            t.p[i].y += y;
            t.p[i].z += z;
        }
    }
}

// 3D mesh scaling

void scale_mesh(mesh& m, float x, float y, float z) {
    for (auto& t : m.tris) {
        for (int i = 0; i < 3; i++) {
            t.p[i].x *= x;
            t.p[i].y *= y;
            t.p[i].z *= z;
        }
    }
}

// 3D mesh loading
bool load_mesh(const char* filename, mesh& m) {
    // open file
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return false;
    }

    // read file
    while (true) {
        char line[128];
        int res = fscanf(file, "%s", line);
        if (res == EOF) {
            break;
        }

        if (strcmp(line, "v") == 0) {
            // vertex
            vec3 v;
            fscanf(file, "%f %f %f", &v.x, &v.y, &v.z);
            m.verts.push_back(v);
        } else if (strcmp(line, "f") == 0) {
            // face
            int f[3];
            fscanf(file, "%d %d %d", &f[0], &f[1], &f[2]);
            triangle t;
            t.p[0] = m.verts[f[0] - 1];
            t.p[1] = m.verts[f[1] - 1];
            t.p[2] = m.verts[f[2] - 1];
            t.sym = 0x2588;
            m.tris.push_back(t);
        }
    }

    // close file
    fclose(file);
    return true;
}

// 3D mesh initialization
void init_mesh(mesh& m) {
    // load mesh
    load_mesh("teapot.obj", m);

    // scale mesh
    scale_mesh(m, 0.5f, 0.5f, 0.5f);

    // translate mesh
    translate_mesh(m, 0.0f, 0.0f, 5.0f);
}

// 3D mesh rendering
void render_mesh(mesh& m) {
    // clear screen
    clear_screen();

    // clear depth buffer
    clear_depth_buffer();

    // rotate mesh
    rotate_mesh(m, 0.0f, 0.0f, 0.0f);

    // draw mesh
    draw_mesh(m);
}

// 3D mesh rendering loop

void render_loop() {
    // initialize mesh
    mesh m;
    init_mesh(m);

    // render loop
    while (true) {
        // render mesh
        render_mesh(m);

        // display screen
        display_screen();

        // wait for 16ms
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }
}

// main function
int main() {
    // initialize screen
    init_screen();

    // render loop
    render_loop();

    // return success
    return 0;
}

