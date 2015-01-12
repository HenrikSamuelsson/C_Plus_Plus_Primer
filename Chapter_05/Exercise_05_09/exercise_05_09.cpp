/**
 * @file
 *      exercise_05_09.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.9 from the book C++ Primer (5th edition).
 * @details
 *      Write a program using o series of if statements to count the number of 
 *      vowels in text read from cin. 
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // Counters, one for each vowel.
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;
    char c;
    
    // Get input and count the vowels.
    while (cin >> c) {
        if (c == 'a') {
            ++a_cnt;
        } else if ( c == 'e') {
            ++e_cnt;
        } else if ( c == 'i') {
            ++i_cnt;
        } else if ( c == 'o') {
            ++o_cnt;
        } else if ( c == 'u') {
            ++u_cnt;
        }
    }
    
    // Present the result of the count.
    cout << "VOWEL COUNT" << endl;
    cout << "a\t" << a_cnt << endl;
    cout << "e\t" << e_cnt << endl;
    cout << "i\t" << i_cnt << endl;
    cout << "o\t" << o_cnt << endl;
    cout << "u\t" << u_cnt << endl;
}
