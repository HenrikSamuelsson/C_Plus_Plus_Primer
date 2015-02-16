/**
 * @file
 *      Sales_data.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 7.3 from the book C++ Primer (5th edition).
 */
#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
