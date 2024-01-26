
  #include <chrono>
#include <thread>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    while(true)
    {
        std::cout << "tick\n";
        std::this_thread::sleep_for( 500ms );
    }
    return 0;
}
   
  