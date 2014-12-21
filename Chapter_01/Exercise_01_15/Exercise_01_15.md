Some examples of programming errors and the corresponding error messages produced by the compiler.  

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
