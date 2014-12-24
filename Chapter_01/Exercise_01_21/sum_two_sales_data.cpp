/*
 * @file 
 *      sum_two_sales_data.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>
#include "Sales_item.h"

/**
 * @brief
 *      Reads two sales_item's objects prints the sum.
 * @note
 *      The exercise instructions in the book state that the two objects have
 *      the same ISBN. It is assumed that it is up to the user to enter objects
 *      with the same ISBN, the program will not check this.
 * @return 
 *      0 upon correct and completed execution 
 */
int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2;
    return 0;
}
