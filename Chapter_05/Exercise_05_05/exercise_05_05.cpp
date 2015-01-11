/**
 * @file
 *      exercise_05_05.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.5 from the book C++ Primer (5th edition)
 * @details
 *      Using an if-else statement, write your own version to generate the 
 *      letter grade from a numeric grade.
 */
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    const vector<string> grades {"F", "D", "C", "B", "A", "A++"};
    int num_grade;
    string letter_grade;
    
    // Let the user enter the numeric grade.
    cout << "Enter score: ";
    cin >> num_grade;
    
    // Calculate the letter grade.
    if (num_grade < 60 ) {
        letter_grade = grades[0];
    } else {
        letter_grade = grades[(num_grade - 50)/10];
    }
    
    // Present the resulting grade.
    cout << "A score of " << num_grade << " equals the grade " << letter_grade;
    
    return 0;
}
