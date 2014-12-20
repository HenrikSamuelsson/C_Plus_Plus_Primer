/**
 * @file
 *      print_range.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

int main()
{
    int min, max;
    std::cout << "Enter start of range: ";
    std::cin >> min;
    std::cout << "Enter end of range: ";
    std::cin >> max;
    
    // Simple validation of the data entered by the user.
    if(min > max)
    {
        std::cout << "ERROR: Start must be larger than end.";
        return 0;
    }
    
    while (min <= max) 
    {
        std::cout << min << " ";
        min++;
    }
    
    return 0;
}