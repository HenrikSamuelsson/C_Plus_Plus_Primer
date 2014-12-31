/**
 * @file
 *      exercise_03_05_part_1.cpp
 * @author
 *      Henrik Samuelsson, henrik.somuelsson(at)gmail.com
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
    string temp, result;
    while(cin >> temp) {
        result.append(temp);
    }
    cout << result;
    return 0;
}
