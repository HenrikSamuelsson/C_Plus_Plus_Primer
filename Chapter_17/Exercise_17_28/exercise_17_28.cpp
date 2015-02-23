/**
 * @file
 *      Exercise_17_28.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 17.28 from the book C++ Primer (5th edition).
 */
#include <iostream>
#include <ctime>
#include <random>

int uniformly_dist_rand();

int main() {
    for (int i=0; i<10; ++i) {
        std::cout << uniformly_dist_rand() << std::endl;
    }
    return 0;
}

int uniformly_dist_rand() {
    static std::default_random_engine e(time(0));
    return e();
}
