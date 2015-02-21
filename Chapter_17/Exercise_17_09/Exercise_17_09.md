#####Question
Explain the bit pattern that each of the following bitset objects contains:  
(a)
```cpp
bitset<64> bitvec(32)
```
(b)
```cpp
bitset<32> bv(1010101);
```
(c)
```cpp
string bstr;
cin >> bstr;
bitset<8> bv(bstr);
```
#####Answer
(a)  
Decimal 32 corresponds to the binary 10 0000. So the bitset will contain this plus a bunch of zeroes to fill up a total of 64 bits:  
```cpp
0000000000000000000000000000000000000000000000000000000000100000
```
(b)  
Note that the number 1010101 is a decimal number that corresponds to the binary 11110110100110110101. This binary number is not 32 bits long so the missing high-order bits are set to 0:  
```cpp
00000000000011110110100110110101
```
(c)  
This example will use input from a user to setup a bitset called bv. The user must enter a consecutive number of characters where only 1 or 0 are valid input.  

The high order bits will be set to zero if the user enters less than 8 characters. A user input of 1111 will for example set bv to 00001111.  

Should the user enter more than eight characters so will these extra characters be dscarded. A user input of 10011000111 will for example set bv to 10011000.
