/**
 * @file
 *      exercise_06_25.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.25 from the book C++ Primer (5th edition).
 * @details
 *      Write a main function that takes two arguments. Concatenate the supplied
 *      arguments and print the resulting string.
 */
#include<iostream>
#include<string>

using std::cout;
using std::string;


int main(int argc, char *argv[]) {
    string in_data;
    
    // Check that we get the expected number of arguments which shall be the 
    // name of the program and then two user defined arguments.
    if(argc != 1 + 2) {
        cout << "ERROR: This program shall be given exactly two arguments.";
        return 1;   // Quit because of incorrect number of arguments.
    }
    
    // Parse the in data.
    in_data = argv[1];
    in_data += " ";
    in_data += argv[2];
    
    // Present the in data.
    cout << in_data;
    
    return 0;
}
