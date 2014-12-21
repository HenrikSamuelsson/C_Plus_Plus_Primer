Some examples of programming errors and the corresponding error messages produced by the compiler.  

Missing parameter list for the main function.
```cpp
int main {
    return 0;
}
```
warning: extended initializer lists only available with -std=c++11 or -std=gnu++11 [enabled by default]  
main.cpp:17:5: error: expected primary-expression before 'return'  
main.cpp:17:5: error: expected '}' before 'return'  
main.cpp:17:5: error: expected ',' or ';' before 'return'  
main.cpp:18:1: error: expected declaration before '}' token  
