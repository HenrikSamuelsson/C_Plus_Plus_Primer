/**
 * @file
 *      exercise_03_07.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>

using std::cout;
using std::endl;
using std::string;

/**
 * @brief
 *      Using a range for loop to change all the characters in a string to x.
 * @details
 *      Almost the same code as in exercise 3.6 but with the loop control
 *      variable explicitly defined as char, which works fine.
 */
int main() {
    string s("Hello World!");
    
    cout << "Original string = " << s << endl;
    for (char &c : s) {
        c = 'x';
    }
    cout << "String after range for loop = " << s << endl;
    
    return 0;
}
