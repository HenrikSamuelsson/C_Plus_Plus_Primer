/**
 * @file
 *      exercise_16_02.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 16.2 from the book C++ Primer (5th edition).
 * @details
 *      Exercise instructions: Write and test your own version of the compare
 *      function.
 */
#include<iostream>

using std::cout;
using std::endl;

template <typename T>
int compare(const T &v1, const T&v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main () {
    cout << compare('A', 'B') << endl;
    cout << compare('B', 'A') << endl;
    cout << compare('A', 'A') << endl;
    
    cout << compare(1, 2) << endl;
    cout << compare(2, 1) << endl;
    cout << compare(1, 1) << endl;
    
    cout << compare(1.0, 2.0) << endl;
    cout << compare(2.0, 1.0) << endl;
    cout << compare(1.0, 1.0) << endl;
    
    return 0;
}
