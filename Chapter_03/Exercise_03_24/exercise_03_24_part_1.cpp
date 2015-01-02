/**
 * @file 
 *      exercise_03_24_part_1.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int temp;
    vector<int> i_vec;
    bool odd;
    
    // Collect all the data in a vector.
    while(cin >> temp) {
        i_vec.push_back(temp);
    }
    
    // Check if the number of elements in the vector is odd or even. 
    odd = i_vec.size() % 2;
    
    // Print the sum of each pair of elements.
    if(odd) {
        for(auto it = i_vec.cbegin(); it != i_vec.cend() - 1; it = it + 2) {
            cout << *it + *(it + 1) << " ";
        }
        // Print the last odd element that do not belong to a pair.
        cout << *(i_vec.cend() - 1);
    } else {
        for(auto it = i_vec.cbegin(); it != i_vec.cend(); it = it + 2) {
             cout << *it + *(it + 1) << " ";
        }
    }
    
    return 0;
}
