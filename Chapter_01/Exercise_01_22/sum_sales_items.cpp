/**
 * @file
 *      sum_sales_items.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson@gmail.com
 */
#include <iostream>
#include "Sales_item.h"

/**
 * @brief
 *      Reads a number of sales_item's objects and prints the sum.
 * @note
 *      The exercise instructions in the book state that the objects have
 *      the same ISBN. It is assumed that it is up to the user to enter objects
 *      with the same ISBN, the program will not check this.
 * @return 
 *      0 upon correct and completed execution 
 */

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
