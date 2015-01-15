/**
 * @file
 *      exercise_05_19.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.19 from the book C++ Primer (5th edition).
 * @details
 *      Write a program that uses a do while loop to repetitively request two
 *      two strings from the user and report which string is less than the
 *      other.
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string rsp;
    do {
        cout << "Enter two strings: ";
        string s1, s2;
        cin >> s1 >> s2;
        if(s1 < s2) {
            cout << s1 << " is less than " << s2 << endl; 
        } else {
            cout << s2 << " is less than " << s1 << endl;
        }
        
        cout << endl << "Quit? (y/n): ";
        cin >> rsp;
    } while(rsp[0] == 'n');
}
