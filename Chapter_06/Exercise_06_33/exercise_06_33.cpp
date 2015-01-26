/**
 * @file
 *      exercise_06_33.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.33 from the book C++ Primer (5th edition).
 * @details
 *      Write a recursive function to print the content of a vector.
 */
#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::size_t;
using std::string;
using std::vector;

void print_vector_content(const vector<string> &vec, size_t size);

int main() {
    const vector<string> b_stroustrup_quote = { "C", "makes", "it", "easy",
            "to", "shoot", "yourself", "in", "the", "foot;", "C++", "makes",
            "it", "harder,", "but", "when", "you", "do,", "it", "blows", "away",
            "your", "whole", "leg." };
    
    print_vector_content(b_stroustrup_quote, b_stroustrup_quote.size());
    
    return 0;
}

void print_vector_content(const vector<string> &vec, size_t size) {
    if(--size)
        print_vector_content(vec, size);
    cout << vec[size] << " ";
}
