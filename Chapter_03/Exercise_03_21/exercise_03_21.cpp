/**
 * @file
 *      exercise_03_21.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    
    cout << "v1 holds " <<  v1.size() << " elements: ";
    for (auto it = v1.begin(); it != v1.end(); it++) 
        cout << *it << " ";
    cout << endl;
    
    cout << "v2 holds " <<  v2.size() << " elements: ";
    for (auto it = v2.begin(); it != v2.end(); it++) 
        cout << *it << " ";
    cout << endl;
    
    cout << "v3 holds " <<  v3.size() << " elements: ";
    for (auto it = v3.begin(); it != v3.end(); it++) 
        cout << *it << " ";
    cout << endl;
    
    cout << "v4 holds " <<  v4.size() << " elements: ";
    for (auto it = v4.begin(); it != v4.end(); it++) 
        cout << *it << " ";
    cout << endl;
    
    cout << "v5 holds " <<  v5.size() << " elements: ";
    for (auto it = v5.begin(); it != v5.end(); it++) 
        cout << *it << " ";
    cout << endl;
    
    cout << "v6 holds " <<  v6.size() << " elements: ";
    for (auto it = v6.begin(); it != v6.end(); it++) 
        cout << *it << " ";
    cout << endl;
    
    cout << "v7 holds " <<  v7.size() << " elements: ";
    for (auto it = v7.begin(); it != v7.end(); it++) 
        cout << *it << " ";
    cout << endl;
    
    return 0;
}
