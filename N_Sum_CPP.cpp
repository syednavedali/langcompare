#include <iostream>
#include <chrono>

//g++ -std=c++11 -o N_Sum N_Sum_CPP.cpp

int main() {
    int N = 1000000000;
    long sum = 0;
    auto start = std::chrono::steady_clock::now();
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    auto end = std::chrono::steady_clock::now();
    std::cout << "Sum: " << sum << std::endl;
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Time taken: " << elapsed_seconds.count() << "s" << std::endl;
    return 0;
}