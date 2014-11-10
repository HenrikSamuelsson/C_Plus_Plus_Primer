#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string input;
    while(getline(cin, input))
    {
        if(input.empty())
            break;
        cout << input;
        cout << endl;
    }
    return 0;
}
