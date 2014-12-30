/**
 * @file
 *      exercise_03_01_part_1.cpp
 * @author
 *      Henrik Samuelsson, henrik.somuelsson(at)gmail.com
 * @brief
 *      Rewrite of an example program from paragraph 1.4.1, with appropriate
 *      using declarations.
 */
#include <iostream>

using std::cout;
using std::endl;

int main() {
    int sum = 0, val = 1;
    
    // Keep executing the while as long as val is less than or equal to 10.
    while (val <= 10) {
        sum += val;     // Assigns sum + val to sum.
        ++val;          // Add 1 to val.
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    
    return 0;
}
