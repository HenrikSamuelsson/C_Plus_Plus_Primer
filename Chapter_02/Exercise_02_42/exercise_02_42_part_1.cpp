/**
 * @file 
 *      exercise_02_42_part_1.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part one of exercise 2.42 from the book C++ Primer (5th edition).
 * @details
 *      A program that reads a set of book sales transactions, writing each
 *      transaction to the standard output.
 */
#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data sd;
    
    while(std::cin >> sd.isbn >> sd.units_sold >> sd.revenue) {
        std::cout << "ISBN: " << sd.isbn  << std::endl;
        std::cout << "Units sold: " << sd.units_sold  << std::endl;
        std::cout << "Revenue: " << sd.revenue  << std::endl;
    }
            
    return 0;
}
