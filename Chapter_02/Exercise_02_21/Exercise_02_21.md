####Question  
Assume the following definition.  
```cpp
int i = 0;
```
Explain each of the following definitions. Indicate whether any ar illegal and if so, why.  
(a)  
```cpp
double* dp = &i;
```
(b)  
```cpp
int *ip = i;
```
(c)  
```cpp
int *p = &i;
```
####Answer  
(a) Invalid, this code tries to make a pointer to a double point at an int variable, this is not allowed.  

(b)  Invalid, this code tries to assign an int value to a pointer. This is not allowed, it is adresses that shall be assigned to pointers.  

(c)  Valid, makes the pointer p point at i.  
