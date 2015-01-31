/**
 * @file 
 *      exercise_02_41_part_4.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part four of exercise 2.41 from the book C++ Primer (5th edition).
 * @details
 *      A program that reads several transactions for the same ISBN and counts
 *      how many transactions occur for each ISBN.
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
        } else {
            // This is a new ISBN, present data about the old ISBN.
            std::cout << "ISBN: " << sd_total.isbn  << std::endl;
            std::cout << "Total number of transactions: " << sd_total.units_sold 
                << std::endl;
            
            // Start over counting units sold of the new ISBN.
            sd_total.isbn = sd_temp.isbn;
            sd_total.units_sold = sd_temp.units_sold;
        }
    }
    
    // Present the result of the final ISBN.
    std::cout << "ISBN: " << sd_total.isbn  << std::endl;
    std::cout << "Total number of transactions: " << sd_total.units_sold 
            << std::endl;
    
    return 0;
}
