/**
 * @file
 *      exercise_05_26.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.26 from the book C++ Primer (5th edition).
 * @details
 *     Write a function that returns 0 when it is first called and then
 *     generates numbers is sequence each time it is called again.
 */
#include <iostream>

using std::cout;

int counter();

/**
 * @brief
 *      Test program for the counter function.
 * @details
 *      Will repeatedly call the counter function and print the return value. 
 * @return 
 *      0 upon successful execution.  
 */
int main() {
    for(int i = 0; i < 10; ++i) {
        cout << counter() << " ";
    }
    
    return 0;   
}

/**
 * @brief
 *      Returns 0 when first called and then an increased number on each call.
 * @return 
 *      Current counter value increased by 1. 
 */
int counter() {
    static int cnt = -1;
    
    return ++cnt;
}