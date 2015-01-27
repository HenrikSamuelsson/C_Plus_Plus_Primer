/**
 * @file
 *      exercise_15_06.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 15.6 from the book C++ Primer (5th edition).
 * @details
 *      Test the print_total functions by passing both Qoute and Bulk_quote
 *      objects to that function.  
 */
#include <iostream>
#include "Bulk_quote.h"

int main() {
    Bulk_quote bq("0321714113", 39.95, 20, 0.10);
    std::cout << "The price for per copy of C++ Primer is $" 
            << bq.net_price(100)/100 << " when buying 100 copise."<< std::endl;
    std::cout << "The price for per copy of C++ Primer is $" 
            << bq.net_price(10)/10 << " when buying 10 copies." <<std::endl;
    
    return 0;
}