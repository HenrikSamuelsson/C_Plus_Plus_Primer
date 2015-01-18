/**
 * @file
 *      fact.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 6.9 from the book C++ Primer (5th edition).
 */
#include "Chapter6.h"

/**
 * @brief
 *      Calculates the factorial of the given input.
 * @param
 *      i The number that will be used as input for the factorial.
 * @return 
 *      The calculated factorial.
 */
int fact(int i) {
    int result = 1;
    while(i > 1)
        result *= i--;
    return result;
}
