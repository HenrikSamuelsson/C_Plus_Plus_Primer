####Question  
Explain the effect of the second declaration in each one of the following sets of declarations. Indicate which, if any, are illegal.  
(a)  
```cpp
int calc(int, int);
int calc(const int, const int);
```
(b)  
```cpp
int get();
double get();
```
(b)  
```cpp
int *reset(int *);
double *reset(double *);
```
####Answer
(a)  
The second version uses const mostly for documentation reasons to indicate that the parameters will not be written to inside of the function. Remember that local copies of the supplied argument is used inside the function in this case.  

This is not legal code since the compiler will not be able to distinguish between the two functions that looks the same from the outside.  

(b)  
First version will return an int and the second will return an int. This is not legal code because if we do not use the return value in our code like this:
```
get();
```
so is there no way for the compiler to know which version we intend to use.  

(c)
This is a legal way to overload a function called reset.
