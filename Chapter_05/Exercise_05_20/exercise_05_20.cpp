/**
 * @file
 *      exercise_05_20.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.20 from the book C++ Primer (5th edition).
 * @details
 *      Write a program to read a sequence of strings from the standard input 
 *      until either the same word occurs twice in succession or all the words
 *      have been read. Use a while loop to read the text one word at a time.
 *      Use the break statement to terminate the loop if a word occurs twice in
 *      succession, or else print a message saying that no word was repeated.      
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
}
