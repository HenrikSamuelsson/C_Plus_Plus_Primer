/**
 * @file
 *      exercise_06_11.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.11 from the book C++ Primer (5th edition).
 * @details
 *      Write and test your own version of reset that takes a reference.
 */
#include <iostream>

using std::cout;
using std::endl;

void reset(int &ri);

int main() {
    int i = 42;
    
    cout << "Before reset: i = " << i << endl;
    reset(i);
    cout << "After reset: i = " << i << endl;
    
    return 0;
}

void reset(int &ri) {
    ri = 0;
}
