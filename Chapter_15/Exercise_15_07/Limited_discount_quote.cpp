/**
 * @file
 *      Limited_discount_quote.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 15.7 from the book C++ Primer (5th edition).
 */
#include "Limited_discount_quote.h"

double Limited_discount_quote::net_price(std::size_t n) const {
    if (n <= max_disc_qty) {
        return n * (1 - discount) * price ;
    } else {
        return (max_disc_qty * (1 - discount) + (n - max_disc_qty)) * price;
    }
}