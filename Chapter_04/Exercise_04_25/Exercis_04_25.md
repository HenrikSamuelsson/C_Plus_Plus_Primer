####Question  
What is the value of `~'q' << 6` on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character set in which 'q' has bit pattern 01110001?  
####Answer  
The left shift will take place before the NOT. The resulting value will be in binary (grouped by four for readability):  
```cpp
1111 1111 1111 1111 1110 0011 1000 0000
```
Which equals -7296 in decimal notation.  
