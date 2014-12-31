/**
 * @file
 *      exercise_03_14.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main() {
    vector<int> ivec;
    int temp;
    
    while (cin >> temp) {
        ivec.push_back(temp);
    }
    
    return 0;
}
