#include <iostream>
#include <string>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

// C++: Hardware-level Fixed-size Arithmetic
int main() {
    
    long long n1 = 123456789, n2 = 987654321;
    volatile long long res = 0;
    auto start = high_resolution_clock::now();
    for(int i=0; i<10000000; ++i) {
         res = n1 + n2; 
    }
    auto end = high_resolution_clock::now();
    cout << "C++ Hardware-level: " << duration<double>(end - start).count() << "s" << endl;
    
    std::cout << "Input values: " << n1 << ", " << n2 << std::endl;
    std::cout << "Result :  " << res << std::endl;


    return 0;
}