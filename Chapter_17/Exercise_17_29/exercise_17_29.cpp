/**
 * @file
 *      Exercise_17_29.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 17.29 from the book C++ Primer (5th edition).
 */
#include <iostream>
#include <random>

unsigned uniformly_dist_rand(int seed = 0);

int main() {
    std::cout << uniformly_dist_rand() << std::endl;    // default seed (0)
    std::cout << uniformly_dist_rand(56) << std::endl;  // user defined seed
    
    return 0; 
}

unsigned uniformly_dist_rand(int seed /*= 0*/) {
    static std::default_random_engine e(seed);
    static std::uniform_int_distribution<unsigned> ud;
    return ud(e);
}
