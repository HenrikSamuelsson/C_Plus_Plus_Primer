/**
 * @file
 *      exercise_03_23.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
    vector<int> i_vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Assign each element a value that is twice its current value.
    for (auto it = i_vec.begin(); it != i_vec.end(); ++it) {
        *it = 2 * *it;
    }
    
    // Print the vector to verify the functionality of the program.
     for (auto it = i_vec.begin(); it != i_vec.end(); ++it) {
        cout << *it << " ";
    }
}
