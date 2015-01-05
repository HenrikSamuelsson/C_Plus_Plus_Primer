####Question
The following assignment is illegal. Why? How would you correct it?  
```cpp
double dval;
int ival;
int *pi;
dval = ival = pi = 0;
```
####Answer  
The problem is that the value of a pointer to int (pi) is being assigndo to an int (ival). This is not allowed and the compiler will detect this.  

A working solution follows below.  
```cpp
double dval;
int ival;
int *pi;
pi = 0;
dval = ival = 0;
```
