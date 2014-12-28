####Question  
Determine the type and values of each of the following variables.  
(a)  
```cpp
int* ip, i, &r = i;
```
(b)  
```cpp
int i, *ip = 0;
```
(c)  
```cpp
int* ip, ip2;
```
####Answer
This question is unclear since it is not specified in what context these variables are defined. It is assumed that all the variables are defined inside of a function.   

None of the variables are are initialized except ip in (b) that is set to 0, this means, under the above assumption, that all the other variables will hold some random garbage value.  

(a)  
ip is of type pointer to int  
i is of type int  
r is of type reference to int  

(b)  
i is of type int  
ip is of type pointer to int

(c)  
ip is of type pointer to int  
ip1 is of type int  
