/**
 * @file
 *      Exercise_17_10.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 17.10 from the book C++ Primer (5th edition).
 * @details
 *      Exercise instructions: Using the sequence 1, 2, 3, 5, 8, 13, 21,
 *      initialize a bitset that has a 1 bit in each position corresponding to
 *      a number in this sequence. Default initialize another bitset and write
 *      a small program to turn on each of the appropriate bits.
 */
#include <bitset>
#include <iostream>

using std::bitset;
using std::cout;
using std::endl;

int main() {
    bitset<32> bv1(0b1000000001000010010111);
    bitset<32> bv2;
    
    cout << "BEFORE" << endl;
    cout << "bv1: " << bv1 << endl;
    cout << "bv2: " << bv2 << endl;
    
    for(int i = 0; i < bv1.size(); ++i)
        if (bv1.test(i))
            bv2.set(i);
    
    cout << "AFTER" << endl;
    cout << "bv1: " << bv1 << endl;
    cout << "bv2: " << bv2 << endl;
    
    return 0;
}