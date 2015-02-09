/**
 * @file
 *      Exercise_07_01.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 7.1 from the book C++ Primer (5th edition).
 */
#include <iostream>
#include "Sales_data.h"

using std::cerr;
using std::cin;
using std::cout;


int main() {
    Sales_data total;
    if(cin >> total.isbn >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.isbn >> trans.units_sold >> trans.revenue) {
            if (total.isbn == trans.isbn) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << "ISBN:" << total.isbn << " sold " << total.units_sold 
                << " units and the revenue was $" << total.revenue << ".";
                total.isbn = trans.isbn;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
         cout << "ISBN:" << total.isbn << " sold " << total.units_sold 
                << " units and the revenue was $" << total.revenue;
    } else {
        cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
