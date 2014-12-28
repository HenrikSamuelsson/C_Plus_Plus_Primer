####Question  
Assume that we have made the following definitions.  
```cpp
int i = 0, &r1 = i;
double d = 0, &r2 = d;
```
Which, if any, of the following assignments are then invalid? If they are valid, explain what they do.  
(a)  
```cpp
r2 = 3.14159;
```
(b)  
```cpp
r2 = r1;
```
(c)  
```cpp
i = r2;
```
(d)  
```cpp
r1 = d;
```
####Answer  
(a) Valid, will assign the value 3.14159 to the variable that r2 refers to.  

(b) Valid, will copy the value of the variable that r1 refers to the variable that r2 refers to.  

(c) Valid, the value of the variable that r2 refers to will be copied to i. Note that som information can be lost since a truncation will take place where any decimals will be thrown away.  

(d) Valid, the value of d will be copied to the variable that r1 refers to. Note that som information can be lost since a truncation will take place where any decimals will be thrown away.  
