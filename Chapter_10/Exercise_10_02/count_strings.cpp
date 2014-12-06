/**
 * \file
 *      count_strings.cpp
 * \author
 *      Henrik Samuelsson
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using std::cout;
using std::vector;
using std::count;

const std::string ANSWER_TO_THE_ULTIMATE_QUESTION = "42";

// Fix to be able to use to_string with my current compiler.
namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

/**
 * @brief
 *      Counts number of occurrences of a given string in a vector of strings.
 */
int main() {
    // Generate 200 pseudo random numbers convert to string and store the 
    // result in a vector.
    vector<std::string> v;
    while(v.size() < 200) {
        v.push_back(patch::to_string(rand() % 100));
    }
    
    int c;
    c = count(v.begin(), v.end(), ANSWER_TO_THE_ULTIMATE_QUESTION);
    cout << ANSWER_TO_THE_ULTIMATE_QUESTION << " was found " << c << " times.";
    
    return 0;
}
