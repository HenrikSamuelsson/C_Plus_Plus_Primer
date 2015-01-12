/**
 * @file
 *      exercise_05_10.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.10 from the book C++ Primer (5th edition).
 * @details
 *      There is one problem with our vowel-counting program as we have
 *      implemented it: It does not count capital letters as vowels. Write a
 *      program that counts both lower- and uppercase letters as the appropriate
 *      vowel, that is your program should count both 'a' and 'A' as the same, 
 *      and so forth.
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
        switch (c) {
            case 'a': case 'A':
                ++a_cnt;
                break;
            case 'e': case 'E':
                ++e_cnt;
                break;
            case 'i': case 'I':
                ++i_cnt;
                break;
            case 'o': case 'O':
                ++o_cnt;
                break;
            case 'u': case 'U':
                ++u_cnt;
                break;
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
