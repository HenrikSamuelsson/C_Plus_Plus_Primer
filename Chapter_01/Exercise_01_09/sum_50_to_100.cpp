/**
 * @file
 *      sum_50_to_100.cpp
 * @outhor
 *      Henrik Samuelsson
 */
#include <iostream>

/**
 * Will sum the numbers from 50 to 100. 
 */
int main()
{
    int sum = 0;
    int number = 50;
    while(number <= 100)
    {
        sum += number;
        number++;
    }
    std::cout << sum;
    return 0;
}