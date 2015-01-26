/**
 * @file
 *      Quote.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 15.3 from the book C++ Primer (5th edition).
 * @details
 *      Define your own version of the Quote class and the print_total function.
 */
#ifndef QUOTE_H
#define QOUTE_H

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
