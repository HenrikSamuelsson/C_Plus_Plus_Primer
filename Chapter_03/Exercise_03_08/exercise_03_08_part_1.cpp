/**
 * @file
 *      exercise_03_08_part_1.cpp
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
 *      Using while loop to change all the characters in a string to x.
 */
int main() {
    string s("Hello World!");
    size_t i, l; 
    
    cout << "Original string = " << s << endl;
    
    i = 0;
    l = s.size();
    while (i < l) {
        s[i] = 'x';
        i++;
    }
    
    cout << "String after range for loop = " << s << endl;
    
    return 0;
}