/**
 * @file
 *      exercise_05_24.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.24 from the book C++ Primer (5th edition).
 * @details
 *      Revise the program in exercise 5.23 to throw an exception if the second
 *      number is zero. Test your program with a zero input to see what happens
 *      on your system if you do not catch an exception.
 * @details
 *      The following output was produced on my system: This application has 
 *      requested the Runtime to terminate it in an unusual way. Please contact
 *      the application's support team for more information.terminate called 
 *      after throwing an instance of 'std::overflow_error'
 *      what():  Divide by zero exception
 */
#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::overflow_error;

int main() {
    int dividend, divisor, quotient, remainder;

    // Get input from the user.
    cout << "Enter two integers that will be used for division: ";
    cin >> dividend >> divisor;

    // Do the calculations.
    if (divisor == 0) {
        throw overflow_error("Divide by zero exception");
    }
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Present the result.
    cout << endl;
    cout << dividend << " divided by " << divisor << " yields:" << endl;
    cout << "\t" << "quotient = " << quotient << endl;
    cout << "\t" << "remainder = " << remainder << endl;

    return 0;
}
