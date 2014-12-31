/**
 * @file
 *      exercise_03_05_part_2.cpp
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
    string spacer = " ";

    while(cin >> temp) {
        result.append(temp);
        result.append(spacer);
    }
    cout << result;
    
    return 0;
}
