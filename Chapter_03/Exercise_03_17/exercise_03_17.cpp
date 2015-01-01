/**
 * @file
 *      exercise_03_17.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<string> s_vec;
    string temp;
    
    while (cin >> temp) {
        for (char &c : temp) {
            c = toupper(c);
        }
        s_vec.push_back(temp);
    }
    
    int c = 0;
    for (string s : s_vec) {
        cout << s;
        c++;
        if (c == 8) {
            cout << endl;
            c = 0;
        } else {
            cout << " ";
        }
    }
    
    return 0;
}
