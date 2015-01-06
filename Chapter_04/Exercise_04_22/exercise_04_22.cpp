/**
 * @file
 *      exercise_04_22.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string final_grade_1(int grade);
string final_grade_2(int grade);

/**
 * @brief
 *      Test program for the grade functions.
 * @details 
 *      Calls both different final grade functions with different input to be
 *      able to verify the functionality.
 * @details
 *      The second version of the final grade functions, that uses if 
 *      statements, is in my opinion the easiest to read. 
 */
int main() {
    int grade;
   
    for(grade = 0; grade != 101; ++grade) {
        cout << grade << " - " 
                << final_grade_1(grade) << " - " 
                << final_grade_2(grade) << endl;
    }
    
    return 0;
}

/**
 * @brief
 *      Calculates the final grade by the use of the conditional operator.
 */
string final_grade_1(int grade) {
    return (grade > 90) ? "high pass"
            : (grade > 75 ) ? "pass"
            : (grade > 60) ? "low pass"
            : "fail";
}

/**
 * @brief
 *      Calculates the final grade by the use of if statements.
 */
string final_grade_2(int grade) {
    string final_grade;
    
    if (grade > 90) {
        final_grade = "high pass";
    } else if (grade > 75) {
        final_grade = "pass";
    } else if (grade > 60 ) {
        final_grade = "low pass";
    } else {
        final_grade = "fail";
    }
    
    return final_grade;
}
