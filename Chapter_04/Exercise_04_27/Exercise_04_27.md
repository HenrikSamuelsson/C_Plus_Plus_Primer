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
(a) Bitwise AND gives a 1 if both bits in the operands contains 1.
```cpp
0000 ... 0000 0011
0000 ... 0000 0111 
------------------
0000 ... 0000 0011
```
The result will be 3.  

(b) Bitwise OR gives a 1 if at least one of the bits in the operands contains 1.
```cpp
0000 ... 0000 0011
0000 ... 0000 0111 
------------------
0000 ... 0000 0111
```
The result will be 7.  

(c) Logical AND evaluates to true if both operands are non zero. The result will hence be true.  

(d) Logical OR evaluates to true if at least one operand is non zero. The result will hence be true.    
