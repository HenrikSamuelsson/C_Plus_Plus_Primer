/**
 * @file
 *      Sales_data.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 7.6 from the book C++ Primer (5th edition).
 */
#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data temp = lhs;
    temp.combine(rhs);
    return temp;
}

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.isbn >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << "Isbn: " << item.getIsbn() << endl 
            << "Units sold: " << item.units_sold << endl
            << "Revenue: " << item.revenue;
}
