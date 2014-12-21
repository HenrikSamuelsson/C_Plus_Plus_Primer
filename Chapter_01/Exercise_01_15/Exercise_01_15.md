Some examples of programming errors and the corresponding error messages produced by the compiler.  

####Example 1  
Missing parameter list for the main function:
```cpp
int main {
    return 0;
}
```
Error messages:  
```
warning: extended initializer lists only available with -std=c++11 or -std=gnu++11 [enabled by default]  
error: expected primary-expression before 'return'  
error: expected '}' before 'return'  
error: expected ',' or ';' before 'return'  
error: expected declaration before '}' token  
```
####Example 2  
Colon instead of semicolon at the end of a statement:  
```cpp
int main() {
    std::cout << "Read each file." << std::endl:
    return 0;
}
```
Error messages:
```
error: expected ';' before ':' token  
```
####Example 3  
Missing quotes around a string literal:  
```cpp
int main() {
    std::cout << Read each file. << std::endl;
    return 0;
}
```
Error messages:  
```
error: 'Read' was not declared in this scope
error: expected ';' before 'each'
```
####Example 4
Missing semicolon on return statement:
```cpp
int main() {
    return 0
}
```
Error messages:  
```
error: expected ';' before '}' token
```
