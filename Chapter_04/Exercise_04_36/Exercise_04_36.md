####Question  
Assuming i is an int and d is a double write the expression 
```cpp
i *= d
```
so that it does integral, rather than floating-point, multiplication.  
####Answer  
```cpp
i *= static_cast<int>(d);
```
