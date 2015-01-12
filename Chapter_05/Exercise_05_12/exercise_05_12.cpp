/**
 * @file
 *      exercise_05_12.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.12 from the book C++ Primer (5th edition).
 * @details
 *      Modify our vowel-counting program so that it counts the number of 
 *      occurrences of the following two-character sequences: ff, fl, fi.
 * @note
 *      std::noskipws must be used because otherwise so would for example "f f"
 *      be counted. 
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // Counters, one for each sequence that will be counted.
    int ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;
    char c;

    // Get input and start by locking for a f.
    while (cin >> std::noskipws >> c) {
        if (c == 'f') {
            // Found a f read and check the following character.
            cin >> std::noskipws >> c;
            switch (c) {
                case 'f':
                    ++ff_cnt;
                    break;
                case 'l':
                    ++fl_cnt;
                    break;
                case 'i':
                    ++fi_cnt;
                    break;
            }
        }
    }

    // Present the result of the count.
    cout << "SEQUENCE COUNT" << endl;
    cout << "ff\t" << ff_cnt << endl;
    cout << "fl\t" << fl_cnt << endl;
    cout << "fi\t" << fi_cnt << endl;
}
