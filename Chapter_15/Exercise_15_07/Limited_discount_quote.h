/**
 * @file
 *      Limited_discaunt_quote.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 15.7 from the book C++ Primer (5th edition).
 */
#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include "Quote.h"

class Limited_discount_quote : public Quote {
public:
    Limited_discount_quote() = default;
    Limited_discount_quote(const std::string& isbn, double p, std::size_t q, 
            double d) : Quote(isbn, p), max_disc_qty(q), discount(d) { }
    
    double net_price(std::size_t n) const override;
private:
    std::size_t max_disc_qty = 0;
    double discount = 0.0;
};

#endif
