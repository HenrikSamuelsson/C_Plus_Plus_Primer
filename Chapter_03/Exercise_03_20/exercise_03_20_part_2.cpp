/**
 * @file 
 *      exercise_03_20_part_2.cpp
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
        for(int i = 0, j = i_vec.size() -1; i < i_vec.size() / 2; i++, j--) {
            cout << i_vec[i] + i_vec[j] << " ";
        }
        // Print the middle element that do not belong to a pair.
        cout << i_vec[i_vec.size() / 2];
    } else {
        for(int i = 0, j = i_vec.size() - 1; i < i_vec.size() / 2; i++, j--) {
            cout << i_vec[i] + i_vec[j] << " ";
        }
    }
    return 0;
}
