####Question  
Assume the following definitions.  
```cpp
int i = 42;
void *p = &i;   // legal
long *lp = &i;  // illegal
```
Why is the initialization of p legal but that of lp illegal?
####Answer
The initialization of p is legal because the type void pointer is a special pointer type that can hold the address of any object. The initialization of lp is illegal because lp is a pointer that can only point to objects of type long but it is attempted to have lp point at an int.  
