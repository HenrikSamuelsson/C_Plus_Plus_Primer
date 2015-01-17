/**
 * @file
 *      exercise_05_23.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.23 from the book C++ Primer (5th edition).
 * @details
 *      Write a program that reads two integers from the standard input and 
 *      prints the result of dividing the first number by the second.     
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int dividend, divisor, quotient, remainder;

    // Get input from the user.
    cout << "Enter two integers that will be used for division: ";
    cin >> dividend >> divisor;
    
    // Do the calculations.
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    
    // Present the result.
    cout << endl;
    cout << dividend << " divided by " << divisor << " yields:" << endl;
    cout << "\t" <<"quotient = " << quotient << endl;
    cout << "\t" <<"remainder = " << remainder << endl;

    return 0;
}
