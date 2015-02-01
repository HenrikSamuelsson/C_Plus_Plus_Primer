/**
 * @file 
 *      exercise_02_41_part_2.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part two of exercise 2.41 from the book C++ Primer (5th edition).
 * @details
 *      Reads two Sales_data objects that have the same ISBN and produces their
 *      sum.
 */
#include <iostream>
#include <string>

struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
    Sales_data sd1, sd2;
    int ret = 0;
    
    std::cout << "Enter sales data for first order: "; 
    std::cin >> sd1.isbn >> sd1.units_sold >> sd1.revenue;
    std::cout << "Enter sales data for second order: "; 
    std::cin >> sd2.isbn >> sd2.units_sold >> sd2.revenue;
    
    if(sd1.isbn != sd2.isbn) {
        std::cout << "ERROR: The ISBN number of the sales data must be equal.";
        ret = 1;
    } else {
        std::cout << "ISBN: " << sd1.isbn << std::endl;
        std::cout << "Total number sold: " << sd1.units_sold + sd2.units_sold 
                << std::endl;
        std::cout << "Total revenue: " << sd1.revenue + sd2.revenue 
                << std::endl;
    }
            
    return ret;
}
