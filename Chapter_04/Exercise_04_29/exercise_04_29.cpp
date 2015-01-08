/**
 * @file
 *      exercise_04_29.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>

using std::cout;
using std::endl;

int main() {
    int x[10];
    int *p = x;
    
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
    
    return 0;
}
