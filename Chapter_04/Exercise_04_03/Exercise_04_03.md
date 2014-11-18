Order of evaluation is often undefined for binary operators in C++. Lets clarify with an example:
```cpp
f() + g()
```
It is in this example not known in which order these functions are called. There is no guarantee that f will run before g just beause f is placed to the left of g.  

This gives the compiler some opportunities for optimaziation. This means that the programmer must be aware of what may happen but the code will possibly run a little faster in the end.  

One of main principles of C++ is that it is designed to be a fast language, so this is a reasonable trade-off.
