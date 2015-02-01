/**
 * @file 
 *      exercise_02_42_part_4.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part four of exercise 2.42 from the book C++ Primer (5th edition).
 * @details
 *      A program that reads several transactions for the same ISBN and counts
 *      how many transactions occur for this ISBN. Will present the result when
 *      a new ISBN is entered and then also start to count transactions for 
 *      this new ISBN. 
 */
#include <iostream>
#include "Sales_data.h"

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
