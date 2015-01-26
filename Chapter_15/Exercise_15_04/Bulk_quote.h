/**
 * @file
 *      Bulk_quote.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 15.5 from the book C++ Primer (5th edition).
 * @details
 *      Define your own version of the Bulk_quote class.
 */
#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include "Quote.h"

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& isbn, double p, 
            std::size_t q, double d) : Quote(isbn, p), mint_qty(q), discount(d);
    
    double net_price(std::size_t n) const override;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

#endif
