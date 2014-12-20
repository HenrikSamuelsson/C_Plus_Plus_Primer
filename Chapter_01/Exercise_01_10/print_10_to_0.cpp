/**
 * @file 
 *      print_10_to_0.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

/**
 * Prints the numbers from 10 down to 0. 
 */
int main()
{
    int number = 10;
    while (number >= 0)
    {
        std::cout << number << std::endl;
        --number;
    }
    return 0;
}
