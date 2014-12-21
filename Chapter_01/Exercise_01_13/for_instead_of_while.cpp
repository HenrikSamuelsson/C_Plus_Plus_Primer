/**
 * @file
 *      for_instead_of_while.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

/**
 * Exercise 1.9 and 1.10 redone wtih for loops instead of while loops.
 */
int main()
{
    std::cout << "Let's sum the numbers from 50 to 100!" << std::endl;
    int sum = 0; 
    for(int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << "sum = " << sum << std::endl;
    
    std::cout << "Let's do a count down from 10 to 0!" ;
    for(int j = 10; j >= 0; j--)
    {
        std::cout << std::endl << j;
    }
    return 0;
}
