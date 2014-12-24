/**
 * @file
 *      multiple_transactions.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <Sales_item.h>

/**
 * @brief
 *      Reads a number of book transactions and counts number of entries 
 *      for each different title.
 * @return 
 *       0 upon correct and completed execution 
 */
int main() {
    Sales_item sum, next;
    int count;
    
     // First entry is a special case that is handled separately.
    std::cin >> next;
    sum = next;
    count = 1;
    
    while(std::cin >> next) {
        if(next.isbn() == sum.isbn()) {
            sum += next;
            count++;
        } else {
            std::cout << "Book with isbn " << sum.isbn() << " occurred in "  <<
                    count << " transactions." << std::endl;
            sum = next;
            count = 1;       
        }
    }
    std::cout << "Book with isbn " << sum.isbn() << " occurred in "  <<
                    count << " transactions." << std::endl;
    
    return 0;
}