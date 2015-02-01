/**
 * @file 
 *      exercise_02_41_part_5.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part five of exercise 2.41 from the book C++ Primer (5th edition).
 * @details
 *      The book store program from section 1.6 but using the Sales_data class
 *      instead of the Sales_item.h include file.
 */
#include <iostream>
#include <string>

struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() 
{
    Sales_data total; // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (std::cin >> total.isbn >> total.units_sold >> total.revenue) {
		Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (std::cin >> trans.isbn >> trans.units_sold >> trans.revenue) {
			// if we're still processing the same book
            if (total.isbn == trans.isbn) 
                total.units_sold += trans.units_sold; // update the running total 
            else {              
		        // print results for the previous book 
                std::cout << total.units_sold << std::endl;  
                total = trans;  // total now refers to the next book
            }
		}
        std::cout << total.units_sold << std::endl; // print the last transaction
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1;  // indicate failure
    }

    return 0;
}
