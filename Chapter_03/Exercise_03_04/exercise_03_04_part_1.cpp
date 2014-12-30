/**
 * @file
 *      exercise_03_04_part_1.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

/**
 * @brief
 *      Reads two strings and checks whether they are equal.
 * @details
 *      Will report which of the two strings that is larger, in the case where 
 *      the strings are unequal.
 * @note 
 *      Can not handle strings of zero length.
 * @return 
 *      0 Upon correct program completion. 
 */
int main() {
    string s1, s2;
    
    cin >> s1 >> s2;
    if(s1 == s2) {
        cout << "The two strings are equal.";
    } else if(s1 > s2) {
        cout << "The first string is larger than the second.";
    } else {
        cout << "The first string is smaller than the second.";
    }
    
    return 0;
}
