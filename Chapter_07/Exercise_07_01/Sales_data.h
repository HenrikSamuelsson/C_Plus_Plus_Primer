/**
 * @file
 *      Sales_data.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 2.42 from the book C++ Primer (5th edition).
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

#endif // SALES_DATA_H