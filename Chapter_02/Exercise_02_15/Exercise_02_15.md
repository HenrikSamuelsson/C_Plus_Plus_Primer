####Question
Which of the following definitions, if any, are invalid? Why?  
(a)  
```cpp
int ival = 1.01;
```
(b)  
```cpp
int &rval1 = 1.01;
```
(c)  
```cpp
int &rval2 = ival:
```
(d)  
```cpp
int &rval3;
```
####Answer
(a) Valid but some information will be lost because the value will be truncated to 1.  

(b) Invalid, a reference cannot be bound to a literal.  

(c) Valid.  

(d) Invalid, a reference must be initialized directly when it is defined.  
