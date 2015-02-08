/**
 * @file
 *      exercise_06_42.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Exercise 6.42 from the book C++ Primer (5th edition).
 * @details
 *      Exercise instructions: Give the second parameter of make_plural 
 *      (§6.3.2, p. 224) a default argument of 's'. Test your program by 
 *      printing a singular and plural versions of the word success and failure.
 * @details
 *      Seems strange that it is the second parameter that should have a default
 *      argument. I will instead apply the default argument to the third
 *      parameter.
 * @note
 *      It can be seen that the function does not really work since words that
 *      end in -ch, x, s or s-like sounds, will require an -es for the plural
 *      version.
 */
#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "s");

int main() {
    cout << "In singular: " 
            << make_plural(1, "success") << " " 
            << make_plural(1, "failure") << endl;
    cout << "In plural: " 
            << make_plural(2, "success") << " " 
            << make_plural(2, "failure") << endl;
    
    return 0;
}

string make_plural(size_t ctr, const string &word, 
        const string &ending /*= "s"*/) {
    return (ctr > 1) ? word + ending : word;
}
