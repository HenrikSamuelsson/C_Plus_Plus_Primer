/**
 * @file
 *      factorial.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

using std::cout;
using std::endl;

int fact(int i);

/**
 * @brief
 *      Test program for the factorial function.
 */
int main() {
    for (int test_value = 0; test_value <= 10; test_value++)
        cout << test_value << "! = " << fact(test_value) << endl;
    return 0;
}

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