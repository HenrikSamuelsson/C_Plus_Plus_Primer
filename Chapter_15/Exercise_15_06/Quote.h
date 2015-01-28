/**
 * @file
 *      Quote.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 15.6 from the book C++ Primer (5th edition).
 */
#ifndef QUOTE_H
#define QUOTE_H

#include <string>

class Quote {
public:
    Quote() = default;
    Quote(const std::string& isbn, double sales_price): isbnNo(isbn), 
    price(sales_price) { }
    std::string isbn() const { return isbnNo; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual ~Quote() = default;
private:
    std::string isbnNo;
protected:
    double price = 0.0;
};

#endif
