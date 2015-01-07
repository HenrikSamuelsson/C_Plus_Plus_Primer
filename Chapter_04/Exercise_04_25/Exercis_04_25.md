####Question  
What is the value of `~'q' << 6` on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character set in which 'q' has bit pattern 01110001?  
####Answer  
Lets go through this one step by step with partial results presented in binary, grouped by four for readability.  

The first thing that will happen before the actual bit manipulation is started is that our character will be promoted to int. This will add 0-bits to the high order bits.  
```cpp
0000 0000 0000 0000 0000 0000 0111 0001
```
The NOT operator (~) have higher precedence than the shift (<<), so the next step will be inverting of every bit.  
```cpp
1111 1111 1111 1111 1111 1111 1000 1110
```
The last step is the shift 6 steps to the left.
```cpp
1111 1111 1111 1111 1110 0011 1000 0000
```
The final result will equal -7296 if presented as a signed decimal.  
