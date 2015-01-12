/**
 * @file
 *      exercise_05_14.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.14 from the book C++ Primer (5th edition).
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
    string s1, s2, s_max;
    int max, cnt;

    // Read the very first string.
    cin >> s1;
    s_max = s1;
    max = cnt = 1;

    // And then continue as long as there are more strings to read.
    while (cin >> s2) {
        if (s1 == s2) {
            ++cnt;
            if (cnt > max) {
                s_max = s1;
                max = cnt;
            }
        } else {
            cnt = 1;
            s1 = s2;
        }
    }

    // Present the result.
    cout << "The most repeated string was \"" << s_max <<
            "\" it was repeated " << max << " times in a row.";
}
