/**
 * @file
 *      exercise_04_21.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test_vector {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    
    // Print content of vector before edit.
    for(auto it = test_vector.begin(); it != test_vector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Double all odd elements.
    for(auto it = test_vector.begin(); it != test_vector.end(); ++it) {
        *it = *it % 2 ? *it * 2 : *it;
    }
    
    // Print content of vector after edit.
    for(auto it = test_vector.begin(); it != test_vector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}