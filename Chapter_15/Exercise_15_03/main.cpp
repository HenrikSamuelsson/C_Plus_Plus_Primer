/**
 * @file
 *      exercise_15_03.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Test program for exercise 15.3 from the book C++ Primer (5th edition).
 * @details
 *      Creates an object and then uses this object to calculate the price of 
 *      100 copies of the book.
 */
#include<iostream>
#include"Quote.h"

int main() {
    Quote q("0321714113", 39.95);
    std::cout << "The price for 100 C++ Primer is $" << q.net_price(100);
    return 0;
}

