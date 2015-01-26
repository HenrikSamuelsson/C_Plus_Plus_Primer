/**
 * @file
 *      exercise_06_27.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.27 from the book C++ Primer (5th edition).
 * @details
 *      Write a function that takes an initializer_list<int> and produces the
 *      sum of the elements in the list.
 */
#include<iostream>
#include<initializer_list>

int sum(std::initializer_list<int> i_list);

int main() {
    std::initializer_list<int> il = {10, 20, 30};
    std::cout << sum(il);
}

int sum(std::initializer_list<int> i_list) {
    int sum = 0;
    for (auto beg = i_list.begin(); beg != i_list.end(); ++beg) {
        sum += *beg;
    } 
    return sum;
}
