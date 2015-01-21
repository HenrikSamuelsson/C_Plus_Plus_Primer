/**
 * @file
 *      exercise_06_23.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.23 from the book C++ Primer (5th edition).
 */
#include<iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int *beg, const int *end);
void print(const int ia[], size_t size);
void print(int (&arr)[2]);

int main() {
    int i = 0, j[2] = {0, 1};
    
    // Print i.
    // Note that only the second print function is used to print i since this
    // is the only one that is (at least kind of) suitable to print a single
    // int. This whole exercise is kind of strange :)
    print(&i, 1);
  
    // Print j.
    print(begin(j), end(j));
    print(j, end(j)-begin(j));
    print(j);  
}

void print(const int *beg, const int *end) {
    cout << "Print version 1 starts." << endl;
    while(beg != end) {
        cout << *beg++ << endl;
    }
}

void print(const int ia[], size_t size) {
    cout << "Print version 2 starts." << endl;
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << endl;
    }
}

void print(int (&arr)[2]) {
    cout << "Print version 3 starts." << endl;
    for (auto elem : arr)
        cout << elem << endl;
}
