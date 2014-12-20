/**
 * @brief 
 *      Printing of comments test.
 * @file 
 *      output_test.cpp
 * @author
 *      Henrik Samuelsson
 */
#include <iostream>

int main ()
{
    std::cout << "*/";  // Ok will print */
    std::cout << "*/";  // Ok will print */
    std::cout << /* "*/" */;     // Will not compile the first citation mark 
                                // ends up inside a comment.
    std::cout << /* "*/" /* "/*" */;    // Ok will print  */ 
    return 0;
}
