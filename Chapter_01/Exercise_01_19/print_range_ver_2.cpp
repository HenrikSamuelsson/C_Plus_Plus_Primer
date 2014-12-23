/**
 * @file
 *      print_range_ver_2.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

int main()
{
    int begin, end;
    std::cout << "Enter begin of range: ";
    std::cin >> begin;
    std::cout << "Enter end of range: ";
    std::cin >> end;
    
    if(begin > end) {
        while (begin >= end) {
            std::cout << begin << " ";
            begin--;
        }
    } 
    else {
        while (begin <= end) {
            std::cout << begin << " ";
            begin++;
        }
    }
    
    return 0;
}