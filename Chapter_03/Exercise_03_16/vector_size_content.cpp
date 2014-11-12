#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    
    cout << "v1 holds " <<  v1.size() << " elements: ";
     for(auto &i : v1) 
        cout << i << " ";
    cout << endl;
    
    cout << "v2 holds " <<  v2.size() << " elements: ";
    for(auto &i : v2) 
        cout << i << " ";
    cout << endl;
    
    cout << "v3 holds " <<  v3.size() << " elements: ";
    for(auto &i : v3) 
        cout << i << " ";
    cout << endl;
    
    cout << "v4 holds " <<  v4.size() << " elements: ";
    for(auto &i : v4) 
        cout << i << " ";
    cout << endl;
    
    cout << "v5 holds " <<  v5.size() << " elements: ";
    for(auto &i : v5) 
        cout << i << " ";
    cout << endl;
    
    cout << "v6 holds " <<  v6.size() << " elements: ";
    for(auto &i : v6) 
        cout << i << " ";
    cout << endl;
    
    cout << "v7 holds " <<  v7.size() << " elements: ";
    for(auto &i : v7) 
        cout << i << " ";
    cout << endl;
}