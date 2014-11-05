Which of the following three pointer definitons are legal?  
```cpp
int i = 0;
double *dp = &i;   // (1)
int *ip = i;      // (2)
int *p = &p;      // (3)
```
(1) Is not correct because a double pointer cannot point at an int variable.  
(2) Is not correct because a pointer shall point at the address of the variable.  
(3) This definition is correct.  
