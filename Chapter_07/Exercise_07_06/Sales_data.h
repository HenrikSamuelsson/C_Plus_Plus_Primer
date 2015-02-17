/**
 * @file
 *      Sales_data.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 7.6 from the book C++ Primer (5th edition).
 * @note
 *      I choose to call the member bookNo for isbn and the corresponding getter
 *      is hence called getIsbn.
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

using std::istream;
using std::ostream;
using std::endl;

struct Sales_data {
    std::string getIsbn() const { return isbn; }
    Sales_data& combine(const Sales_data&);
    
    std::string isbn;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);

#endif // SALES_DATA_H
