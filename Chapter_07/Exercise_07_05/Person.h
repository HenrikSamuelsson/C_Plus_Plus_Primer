/**
 * @file
 *      Person.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 7.5 from the book C++ Primer (5th edition).
 * @details
 *      Exercise instructions: Provide operations in your Person class to return
 *      the name and address. Should these functions be const? Explain your 
 *      choice.
 * @details
 *      Both the defined functions should be const since they are intended to be
 *      used only for reading out information about the object.
 */
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    string name;
    string address;
    string address() const { return this->address; }
    string name() const { return this->name; }
};

#endif
