/**
 * @file
 *      exercise_05_11.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.11 from the book C++ Primer (5th edition)
 * @details
 *      Modify our vowel-counting program so that it also counts the number of 
 *      blanks spaces, tabs, and newlines.
 * @note
 *      /n functioned for detecting new line on the Windows system were the
 *      code was tested. Might need to be replaced by something else on other
 *      systems.
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // Counters, one for each character that shall be counted.
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;
    int space_cnt = 0, tab_cnt = 0, nl_cnt = 0;
    char c;
    
    // Get input and count the characters that we are intersted in.
    while (cin >> std::noskipws >> c) {
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
            case ' ':
                ++space_cnt;
                break;
            case '\t':
                ++tab_cnt;
                break;
            case '\n':
                ++nl_cnt;
                break;   
        }
    }
    
    // Present the result of the count.
    cout << "CHAR COUNT" << endl;
    cout << "a\t" << a_cnt << endl;
    cout << "e\t" << e_cnt << endl;
    cout << "i\t" << i_cnt << endl;
    cout << "o\t" << o_cnt << endl;
    cout << "u\t" << u_cnt << endl;
    cout << "sp\t" << space_cnt << endl;
    cout << "tab\t" << tab_cnt << endl;
    cout << "nl\t" << nl_cnt << endl;
}
