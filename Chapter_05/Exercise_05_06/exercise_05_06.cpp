/**
 * @file
 *      exercise_05_06.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 5.6 from the book C++ Primer (5th edition).
 * @details
 *      Rewrite your grading program to use the conditional operator in place
 *      of the if-else statement.
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
    letter_grade =  (num_grade < 60 ) ? grades[0] : grades[(num_grade - 50)/10];
    
    // Present the resulting grade.
    cout << "A score of " << num_grade << " equals the grade " << letter_grade;
    
    return 0;
}
