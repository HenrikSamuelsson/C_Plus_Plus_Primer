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
    vector<string> s_vec;
    string temp;
    
    while (cin >> temp) {
        s_vec.push_back(temp);
    }
    
    return 0;
}
