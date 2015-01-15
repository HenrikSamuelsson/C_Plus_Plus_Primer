/**
 * @file
 *      exercise_01_05.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 1.5 from the book C++ Primer (5th edition).
 */
#include <iostream>

/**
 * @brief
 *      Multiplies two user defined integers.
 * @return 
 *      0 upon succesful program execution 
 */
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    
    
    return 0;
}
