/**
 * @file
 *      exercise_05_21.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.21 from the book C++ Primer (5th edition).
 * @details
 *      Revise the program from exercise 5.20 so that it looks only for
 *      duplicated words that start with an uppercase letter.   
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
    string s1, s2;
    bool word_occured_twice = false;
    
    // The very first word is a special case that is read and stored before a 
    // loop is run that will read the rest of the words.
    cin >> s1;
    
    while (cin >> s2) {
        if (islower(s2[0])) {
            // Continue directly with the next string if the current string
            // starts with a lowercase letter.
            continue;
        }
        if (s1 == s2) {
            word_occured_twice = true;
            break;
        }
        s1 = s2;
    }
    
    if (word_occured_twice) {
        cout << "The word \"" << s1 << "\" occurred twice in a row.";
    } else {
        cout << "There was no word that occurred twice in a row.";
    }
    
    return 0;
}
