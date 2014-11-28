/**
 * @file
 *      absolute_value.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

using std::cout;
using std::endl;

int abs(int i);

/**
 * @brief
 *      Test program for the absolute_value function.
 */
int main() {
    for(int i = -5; i <= 5; i++) {
        cout << "The absolute value of " << i << " is " << abs(i) << endl;
    }
    return 0;
}

/**
 * @brief
 *      Calculates the absolute value of a given integer.
 * @param i input value
 * @return absolute value of input value
 */
int abs(int i) {
    return i < 0 ? -i : i;
}