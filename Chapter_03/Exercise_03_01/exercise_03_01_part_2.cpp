/**
 * @file
 *      exercise_03_01_part_2.cpp
 * @author
 *      Henrik Samuelsson, henrik.somuelsson(at)gmail.com
 * @brief
 *      Rewrite of an example program from paragraph 2.6.1, to use appropriate
 *      using declarations.
 */
#include <iostream>
#include <string>
#include "Sales_data.h"

using std::endl;
using std::cerr;
using std::cin;
using std::cout;

int main() {
    Sales_data data1, data2;
    double price = 0;
    
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    
    if(data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << totalCnt << totalRevenue << " ";
        if(totalCnt != 0)
            cout << totalRevenue/totalCnt << endl;
        else
            cout << "(no sales)" << endl;
        return 0;
    } else {
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;
    }
}
