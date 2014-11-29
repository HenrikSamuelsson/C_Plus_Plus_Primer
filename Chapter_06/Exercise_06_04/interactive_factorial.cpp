/**
 * @file
 *      interactive_factorial.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int fact(void);

/**
 * @brief
 *      Test program for the fact function.
 */
int main() {
    fact();
    return 0;
}

/**
 * @brief
 *      Takes input from the user and calculates the factorial.
 * 
 * @retval 0 Upon correct end of execution.
 */
int fact(void) {
    int input;
    cout << "This program calculates the factorial of given input." << endl;
    cout << "Valid input are positive integers, enter 0 to quit." << endl;
    cout << "Enter a number: ";
    while ( cin >> input ) {
        unsigned long long result = 1;
        if(input <= 0)
            break;
        while(input > 1)
            result *= input--;
        cout << result << endl;
        cout << "Enter another number: ";
    }
    return 0;
}
