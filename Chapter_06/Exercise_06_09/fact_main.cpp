/**
 * @file
 *      fact_main.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 6.9 from the book C++ Primer (5th edition).
 */
#include <iostream>
#include "Chapter6.h"

using std::endl;
using std::cout;

/**
 * @brief
 *      Test program for the factorial function.
 */
int main() {
    for (int test_value = 0; test_value <= 10; test_value++)
        cout << test_value << "! = " << fact(test_value) << endl;
    return 0;
}
