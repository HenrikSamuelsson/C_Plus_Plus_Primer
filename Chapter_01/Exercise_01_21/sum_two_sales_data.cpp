/*
 * @file 
 *      sum_two_sales_data.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2;
    return 0;
}