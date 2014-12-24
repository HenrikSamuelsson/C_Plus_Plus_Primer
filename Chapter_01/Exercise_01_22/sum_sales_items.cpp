/**
 * @file
 *      sum_sales_items.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson@gmail.com
 */
#include <iostream>
#include "Sales_item.h"

int main () {
    Sales_item sum, first, next;
    
    // First entry is a special case that is handled separately.
    std::cin >> first;
    sum = first;
    
    while(std::cin >> next) {
        sum += next;
    }
    std::cout << sum;
    return 0;
}