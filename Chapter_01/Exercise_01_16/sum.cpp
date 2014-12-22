/**
 * @file
 *      sum.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

/**
 * Sums a number of integers given as input by a user.
 */
int main()
{
    int sum = 0;
    int next_value = 0;
    
    while(std::cin >> next_value)
    {
        sum = sum + next_value;
    }
    std::cout << "sum = " << sum; 
}
