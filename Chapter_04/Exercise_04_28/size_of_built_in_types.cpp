/**
 * @file
 *      exercise_04_28.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(@)gmail.com
 * @brief
 *      C++ Primer (5th Edition), exercise 4.28
 * @details
 *      Write a program to print the size of each of the built-in types.  
 */
#include <iostream>

using std::cout;
using std::endl;

/**
 * /brief
 *    Discovers and prints the size of built in types.  
 */
int main() {
    cout << "TYPE"        << "\t\t" << "SIZE" << endl;
    cout << "\"\"\"\""    << "\t\t" << "\"\"\"\"" << endl;
    
    cout << "char"        << "\t\t" << sizeof(char) << endl;
    cout << "bool"        << "\t\t" << sizeof(bool) << endl;
    cout << "short"       << "\t\t" << sizeof(short) << endl;
    cout << "int"         << "\t\t" << sizeof(int) << endl;
    cout << "int8_t"      << "\t\t" << sizeof(int8_t) << endl;
    cout << "int16_t"     << "\t\t" << sizeof(int16_t) << endl;
    cout << "int32_t"     << "\t\t" << sizeof(int32_t) << endl;
    cout << "int64_t"     << "\t\t" << sizeof(int64_t) << endl;
    cout << "long "       << "\t\t" << sizeof(long) << endl;
    cout << "long long"   << "\t"   << sizeof(long long) << endl;
    cout << "float"       << "\t\t" << sizeof(float) << endl;
    cout << "double"      << "\t\t" << sizeof(double) << endl;
    cout << "long double" << "\t"   << sizeof(long double) << endl;
    cout << "wchar_t"     << "\t\t" << sizeof(wchar_t) << endl;
    
    return 0;
}
