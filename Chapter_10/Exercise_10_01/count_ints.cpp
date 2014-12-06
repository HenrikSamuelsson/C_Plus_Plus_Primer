/**
 * \file
 *      count_ints.cpp
 * \author
 *      Henrik Samuelsson
 */
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::count;

const int ANSWER_TO_THE_ULTIMATE_QUESTION = 42;

/**
 * @brief
 *      Counts number of occurrences of a given int in a vector of int's.
 */
int main() {
    // Generate 200 pseudo random numbers and store them in a vector.
    vector<int> v;
    while(v.size() < 200) {
        v.push_back(rand() % 100);
    }
    
    int c;
    c = count(v.begin(), v.end(), ANSWER_TO_THE_ULTIMATE_QUESTION);
    cout << ANSWER_TO_THE_ULTIMATE_QUESTION << " was found " << c << " times.";
    
    return 0;
}
