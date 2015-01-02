/**
 * @file
 *      exercise_03_25.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
    // Vector with eleven elements, all initialized to zero.
    vector <unsigned> scores(11, 0);
    unsigned grade;
    
    // Read grades entered by the user of the program.
    while(cin >> grade) {
        if (grade <= 100) {
            (*(scores.begin() + grade/10))++;
        }
    }
    
    // Print content of scores to verify that the program works as intended.
    for(auto g : scores){
        cout << g << " ";
    }
    
    return 0;
}
