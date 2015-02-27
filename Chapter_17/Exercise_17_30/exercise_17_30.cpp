/**
 * @file
 *      Exercise_17_30.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 17.30 from the book C++ Primer (5th edition).
 */
#include <iostream>
#include <random>

unsigned uniformly_dist_rand(const int min, const int max);

int main() {
    int minimum = 1;
    int maximum = 100;
    
    for (int i=0; i<10; ++i) {
        std::cout << uniformly_dist_rand(minimum, maximum) << std::endl;
    }
    return 0;
}

unsigned uniformly_dist_rand(const int min, const int max) {
    static std::default_random_engine e;
    static std::uniform_int_distribution<unsigned> ud(min, max);
    return ud(e);
}
