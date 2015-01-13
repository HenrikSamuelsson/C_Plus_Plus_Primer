/**
 * @file
 *      exercise_01_04.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 1.4 from the book C++ Primer (5th edition).
 */
#include <iostream>

/**
 * Multiplies two user defined integers.
 * 
 * @return 0 upon succesfuel program execution 
 */
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2
            << std::endl;
    return 0;
}
