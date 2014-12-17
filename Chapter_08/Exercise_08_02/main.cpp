/**
 * @brief 
 *      Test of the read function.
 * @file 
 *      main.cpp
 * @author
 *      Henrik Samuelsson
 *
 */

#include <iostream>
#include <string>

using std::istream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

/**
 * Reads from an istream until end-of-file is found and prints what is read.
 * 
 * @param input_stream stream to read from
 * @return the stream that was read from
 */
istream& read(istream& input_stream)
{
    string in_data;
    
    while (input_stream >> in_data)
    {
        ;
    }
    cout << "End of in data" << endl;
    cout << "Read this data: " << in_data << endl;
    input_stream.clear();
    return input_stream;
}

/**
 * Entry point of program.
 * 
 * @return 0 if execution was successful 
 */
int main() {
    read(cin);
    return 0;
}
