####Question  
What output will the following code produce?  
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;   // (a)
std::cout << u - u2 << std::endl;   // (b)

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;   // (c)
std::cout << i - i2 << std::endl;   // (d)

std::cout << i - u << std::endl;    // (e)
std::cout << u - i << std::endl;    // (f)
```
####Answer  
(a) 32  
(b) 4294967264 (Assuming that the system uses 32 bit int's) What happens in this case is that the calculation underflows. This will cause a "wrap around" producing a value that is more or less garbage.  
(c) 32  
(d) -32  
(e) 0  
(f) 0  
