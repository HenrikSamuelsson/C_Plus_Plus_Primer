/**
 * @file
 *      exercise_03_08_part_2.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::size_t;

/**
 * @brief
 *      Using for loop to change all the characters in a string to x.
 */
int main() {
    string s("Hello World!");
    
    cout << "Original string = " << s << endl;
    
    for (size_t i=0; i < s.size(); i++) {
        s[i] = 'x';
    }
    
    cout << "String after range for loop = " << s << endl;
    
    return 0;
}