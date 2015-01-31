/**
 * @file 
 *      exercise_02_41_part_3.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part three of exercise 2.41 from the book C++ Primer (5th edition).
 * @details
 *      A program that reads several transactions for the same ISBN. Will then 
 *      write the sum of all transactions that were read.
 */
#include <iostream>

struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
    Sales_data sd_total, sd_temp;
        
    // First read is a special case because we do not know the ISBN yet.
    std::cin >> sd_total.isbn >> sd_total.units_sold >> sd_total.revenue;
    
    // Read more transactions and update the total.
    while(std::cin >> sd_temp.isbn >> sd_temp.units_sold >> sd_temp.revenue) {
        if(sd_total.isbn == sd_temp.isbn) {
            sd_total.units_sold += sd_temp.units_sold;
            sd_total.revenue += sd_temp.revenue;
        } else {
            std::cout << "ERROR: ISBN number does not match.";
            return 1;
        }
    }
    
    // Present the result.
    std::cout << "ISBN: " << sd_total.isbn << std::endl;
    std::cout << "Total sold: " << sd_total.units_sold  << std::endl;
    std::cout << "Total revenue: " << sd_total.revenue  << std::endl;
            
    return 0;
}
