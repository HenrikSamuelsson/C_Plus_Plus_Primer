/**
 * @file
 *      exercise_05_17.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.17 from the book C++ Primer (5th edition).
 */
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool isPrefix(vector<int> v1, vector<int> v2);

int main() {
    // Test vectors used to verify that the program is correct.
    vector<int> test_vec_1 {0, 1, 1, 2};
    vector<int> test_vec_2 {0, 1, 1, 2, 3, 5, 8};
    vector<int> test_vec_3 {0, 1, 1, 2, 4, 8, 7, 9};
    
    cout << isPrefix(test_vec_1, test_vec_2) << endl;
    cout << isPrefix(test_vec_1, test_vec_3) << endl;
    cout << isPrefix(test_vec_2, test_vec_3) << endl;
    cout << isPrefix(test_vec_2, test_vec_1) << endl;
    cout << isPrefix(test_vec_3, test_vec_1) << endl;
    cout << isPrefix(test_vec_3, test_vec_2) << endl;
}

bool isPrefix(vector<int> v1, vector<int> v2) {
    std::vector<int>::size_type length, i;
    length = v1.size() < v2.size() ? v1.size() : v2.size();
    
    for (i = 0; i < length; i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    // All elements in the prefix must have been equal if we end up here.
    return true;   
}
