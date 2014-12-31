/**
 * @file
 *      exercise_03_15.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::string;
using std::vector;

int main() {
    vector<string> ivec;
    string temp;
    
    while (cin >> temp) {
        ivec.push_back(temp);
    }
    
    return 0;
}
