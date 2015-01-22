/**
 * @file
 *      exercise_06_26.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.26 from the book C++ Primer (5th edition).
 * @details
 *      Write a program that accepts the options presented in this section. 
 *      Print the values of the arguments passed to main.
 */
#include<iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
    for (int i = 1; i <=argc; i++)
        cout << argv[i] << endl;
    return 0;
}
