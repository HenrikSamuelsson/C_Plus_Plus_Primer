/**
 * @file
 *      exercise_03_06.cpp
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
 */
int main() {
    string s("Hello World!");
    
    cout << "Original string = " << s << endl;
    for (auto &c : s) {
        c = 'x';
    }
    cout << "String after range for loop = " << s << endl;
    
    return 0;
}
