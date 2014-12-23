/**
 * @file 
 *      write_sales.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>
#include "Sales_item.h"

/**
 * Reads a set of Sales_item's and echos back each entry.
 * 
 * @return 0 upon correct program exit
 */
int main() {
    Sales_item si;
    while(std::cin >> si) {
        std::cout << si << std::endl;
    }
            
    return 0;
}
