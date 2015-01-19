/**
 * @file
 *      exercise_06_12.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.12 from the book C++ Primer (5th edition).
 * @details
 *      Rewrite the program for exercise 6.10 to use references instead of 
 *      pointers to swap the value of two ints. Which version do you think
 *      would be easier to use and why?
 * @details
 *      This version is in my opinion a bit better because the code becomes 
 *      slightly less cluttered without the dereference and address of
 *      operators.
 */
#include<iostream>

using std::cout;
using std::endl;

int swap(int &i, int &j);
int print_data(const int i, const int j);

int main() {
    int a = 5;
    int b = 10;
    
    cout << "Before swap:" << endl;
    print_data(a, b);
    swap(a, b);
    cout << "After swap:" << endl;
    print_data(a, b);
}

int swap(int &i, int &j) {
    int t = i;
    i = j;
    j = t;
}

int print_data(const int i, const int j) {
    cout << "\t" << "first int = " << i << endl;
    cout << "\t" << "second int = " << j << endl;
}
