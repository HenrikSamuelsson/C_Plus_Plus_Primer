#include <iostream>
/**
 * Exercise that (I) changes the value of a pointer and (II) changes the value
 * to which the pointer points.
 */
int main ()
{
    int i1 = 1;
    int i2 = 1;
    int* p = &i1;
    std::cout << "p = " << p << " *p = " << *p << std::endl;
    std::cout << "Let's change p by pointing somewhere else." << std::endl;
    p = &i2;
    std::cout << "p = " << p << " *p = " << *p << std::endl;
    std::cout << "Let's change the value of what p points at." << std::endl;
    *p = 2; 
    std::cout << "p = " << p << " *p = " << *p << std::endl;
    return 0;
}
