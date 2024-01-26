// generate a code for sum an array recursively

#include <iostream>
using namespace std;

int sum(int a[], int n) {
    if (n == 0) return 0;
    return sum(a, n-1) + a[n-1];
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    cout << sum(a, 5) << endl;
    return 0;
}