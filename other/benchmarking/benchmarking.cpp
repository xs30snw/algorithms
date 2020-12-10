#include <iostream>
#include <chrono>

void function() {
    
    // Code being tested;

}

int main() {

    auto t1 = std::chrono::high_resolution_clock::now();
    
    for ( int i = 0; i < 1000000; i++ )
        function();
    
    auto t2 = std::chrono::high_resolution_clock::now();

    auto delta_t = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    std::cout << delta_t << "\n";

    return 0;
}