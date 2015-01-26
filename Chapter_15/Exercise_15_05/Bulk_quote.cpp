/**
 * @file
 *      Bulk_qoute.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 15.5 from the book C++ Primer (5th edition).
 */
#include "Bulk_quote.h"

double Bulk_quote::net_price(std::size_t n) const {
    if (n >= min_qty) {
        return n * (1 - discount) * price; 
    } else {
        return n * price;
    }
}
