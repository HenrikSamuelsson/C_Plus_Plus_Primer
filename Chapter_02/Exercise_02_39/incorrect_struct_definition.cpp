/*
 * Exercise involving a struct and making the common error of forgetting the
 * semicolon at the end of the struct definition.
 * 
 * This mistake gave the following error message:
 * 
 *      incorrect_struct_definition.cpp:1:37: 
 *      error: expected ';' after struct definition
 */
struct Foo { /* Empty on purpose.*/ } // Note: no semicolon.
int main()
{
    return 0;
}