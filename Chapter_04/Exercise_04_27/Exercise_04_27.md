####Question  
Assume the following definitions.  
```cpp
unsigned long ul1 = 3, ul2 = 7;
```
What is then the result of each of these expressions?  
(a) `ul1 & ul2`  
(b) `ul1 | ul2`  
(c) `ul1 && ul2`  
(d) `ul1 || ul2`  
####Answer  
(a) Bitwise and gives a 1 if both bits in the operands contains 1.
```cpp
0000 ... 0000 0011
0000 ... 0000 0111 
------------------
0000 ... 0000 0011
```
The result will be 3.  
