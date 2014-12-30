/**
 * @file
 *      exercise_03_04_part_2.cpp
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
 *      Reads two strings and then check the lengths of the strings.
 * @note 
 *      Can not handle strings of zero length.
 * @return 
 *      0 Upon correct program completion. 
 */
int main() {
    string s1, s2;
    
    cin >> s1 >> s2;
    if(s1.size() == s2.size()) {
        cout << "The two strings are of equal length.";
    } else if(s1.size() > s2.size()) {
        cout << "The first string is longer than the second.";
    } else {
        cout << "The first string is shorter than the second.";
    }
    
    return 0;
}
