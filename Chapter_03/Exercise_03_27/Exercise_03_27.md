Assume that txt_zise is a function that takes no arguments and returns an int.
Also assume the following definition:
```cpp
unsigned buf_size = 1024;
```
Finnaly assume that the following definitions are made in the global scope of a program. Which of them are then illegal?  
```cpp
int ia[buf_size];     // (a)
int ib[4 * 7 - 14];   // (b)
int ic[txt_size()];   // (c)
char sd[11] = "fundamental";
```
