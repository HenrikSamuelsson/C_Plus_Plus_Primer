/**
 * \file
 *      while_loops.cpp
 * \author
 *      Henrik Samuelsson
 */
#include <iostream>

using std::cout;
using std::endl;

/**
 * /brief
 *      Adds the numbers from 1 to 10 by the use of two different variants of 
 *      while loops.
 * /details
 *      The first while loop is probably how this type code is usually is
 *      implemented and will probably be better for other people that might
 *      work with the code in the future. It is however nice for readability to
 *      have the addend comparison and increment in one single place, like in 
 *      the second loop. 
 */
int main() {
    int sum , addend;
    
    sum = 0;
    addend = 0;
    while(addend <= 10) {
        sum += addend;
        ++addend;
    }   
    cout << "Sum (according to first while loop) = " << sum << endl;
    
    sum = 0;
    addend = 0;
    while(sum += addend, ++addend, addend <= 10)
        ;
    cout << "Sum (according to second while loop) = " << sum << endl;
    
    return 0;
}

