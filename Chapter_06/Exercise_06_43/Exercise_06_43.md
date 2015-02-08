#####Question  
Which one of the following declarations and definitions would you put in a header? In a source file? Explain why.  
(a)  
```cpp
inline bool eq(const BigInt&, const BigInt&) {
  /* ... */
}
```
(b)  
```cpp
void putValues(int *arr, int size);
```
#####Answer
(a) This definition should be put in a header file because inline functions are normally defined in headers. This is because inline function may be defined multiple times in the program. However all of the definitons of a given inline must match exactly. This is acheived by putting the definiton in a header and then including this header in source files when needed.  

(b) This declaration could be placed in a header if the function is needed to be used in more than one source file of the program.  
