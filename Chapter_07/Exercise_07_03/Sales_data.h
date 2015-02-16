/**
 * @file
 *      Sales_data.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 7.2 from the book C++ Primer (5th edition).
 * @details
 *      Exercise instructions: Add the combine and isbn members to the 
 *      Sales_data class you wrote for the exercises in paragraph 2.6.2
 *      (page 76).
 * @note
 *      I choose to call the member bookNo for isbn and the corresponding getter
 *      is hence called getIsbn.
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string getIsbn() const { return isbn; }
    Sales_data& combine(const Sales_data&);
    
    std::string isbn;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif // SALES_DATA_H
