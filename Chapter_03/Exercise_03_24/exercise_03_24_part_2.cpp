/**
 * @file 
 *      exercise_03_24_part_2.cpp
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
        for(auto it_i = i_vec.cbegin(), it_j = i_vec.cend() - 1; 
                it_i != i_vec.cbegin() + i_vec.size() / 2;
                it_i++, it_j--) {
            cout << *it_i + *it_j << " ";
        }
        // Print the middle element that do not belong to a pair.
        cout << i_vec[i_vec.size() / 2];
    } else {
        for(auto it_i = i_vec.cbegin(), it_j = i_vec.cend() - 1;  
                it_i != i_vec.cbegin() + i_vec.size() / 2; 
                it_i++, it_j--) {
            cout << *it_i + *it_j << " ";
        }
    }
    return 0;
}
