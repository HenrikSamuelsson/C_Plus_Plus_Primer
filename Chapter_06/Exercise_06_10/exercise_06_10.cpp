/**
 * @file
 *      exercise_06_10.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.10 from the book C++ Primer (5th edition).
 * @details
 *      Using pointers, write a function to swap the values of two ints. Test
 *      the function by calling it and print the swapped values.
 */
#include<iostream>

using std::cout;
using std::endl;

int swap(int *i, int *j);
int print_data(const int i, const int j);

int main() {
    int a = 5;
    int b = 10;
    
    cout << "Before swap:" << endl;
    print_data(a, b);
    swap(&a, &b);
    cout << "After swap:" << endl;
    print_data(a, b);
}

int swap(int *i, int *j) {
    int t = *i;
    *i = *j;
    *j = t;
}

int print_data(const int i, const int j) {
    cout << "\t" << "first int = " << i << endl;
    cout << "\t" << "second int = " << j << endl;
}
