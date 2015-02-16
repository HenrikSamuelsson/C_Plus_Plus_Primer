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
 */
#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
