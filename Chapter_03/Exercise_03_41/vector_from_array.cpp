/**
 * \file
 *      vector_from_array.cpp
 * \author
 *      Henrik Samuelsson
 */
#include <vector>
#include <iostream>

using std::vector;
using std::begin;
using std::end;
using std::cout;

/**
 * /brief
 *    Initializes a vector based on data in an array.  
 */
int main() {
    int int_array[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec(begin(int_array), end(int_array));
    
    // Test the program by printing the content in ivec.
    for(int i:ivec)
        cout << i << " ";
    
    return 0;
}

