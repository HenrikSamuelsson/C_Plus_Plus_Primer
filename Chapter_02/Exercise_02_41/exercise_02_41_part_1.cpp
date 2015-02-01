/**
 * @file 
 *      exercise_02_41_part_1.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part one of exercise 2.41 from the book C++ Primer (5th edition).
 * @details
 *      A program that reads a set of book sales transactions, writing each
 *      transaction to the standard output.
 */
#include <iostream>
#include <string>

struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
    Sales_data sd;
    
    while(std::cin >> sd.isbn >> sd.units_sold >> sd.revenue) {
        std::cout << "ISBN: " << sd.isbn  << std::endl;
        std::cout << "Units sold: " << sd.units_sold  << std::endl;
        std::cout << "Revenue: " << sd.revenue  << std::endl;
    }
            
    return 0;
}
