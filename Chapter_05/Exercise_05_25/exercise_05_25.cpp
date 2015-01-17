/**
 * @file
 *      exercise_05_24.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.24 from the book C++ Primer (5th edition).
 * @details
 *      Revise the program in exercise 5.24 to use a try block to catch the
 *      exception. The catch clause should print a message to the user and ask
 *      them to supply a new number and repeat the code inside the try.
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
    while (cin >> dividend >> divisor) {
        try {
            if (divisor == 0) {
                throw overflow_error("Input error, divisor was 0.");
            }
            
            // Do the calculations.
            quotient = dividend / divisor;
            remainder = dividend % divisor;

            // Present the result.
            cout << endl;
            cout << dividend << " divided by " << divisor << " yields:" << endl;
            cout << "\t" << "quotient = " << quotient << endl;
            cout << "\t" << "remainder = " << remainder << endl;
            
            return 0;
            
        } catch (overflow_error err) {
            cout << err.what() << endl;
            cout << "Enter two integers that will be used for division: ";
        }
    }
}
