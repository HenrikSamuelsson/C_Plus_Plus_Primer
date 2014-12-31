/**
 * @file
 *      exercise_03_10.cpp
 * @author
 *      Henrik Samuelsson, henrik.somuelsson(at)gmail.com
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string input;
    
    cin >> input;
    cout << "Input before edit: " << input << endl;
    
    for (size_t i=0; i < input.size(); i++) {
        if(ispunct(input[i])) {
            input.erase(input.begin() + i);
        }
    }
    
    cout << "Input after edit: " << input << endl;
    
    return 0;
}