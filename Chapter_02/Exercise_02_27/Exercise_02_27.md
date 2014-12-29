####Question
Which of the following initializations are legal? Explain why.  
(a)
```cpp
int i = -1, &r = 0;
```
(b)
```cpp
int *const p2 = &i2;
```
(c)
```cpp
const int i = -1, &r = 0;
```
(d)
```cpp
const int *const p3 = &i2;
```
(e)
```cpp
const int *p1 = &i2;
```
(f)
```cpp
const int &const r2;
```
(g)
```cpp
const int i2 = i, &r = i;
```
####Answer  
(a) The initalization of i is legal, r is not since it is not allowed to initialize a non const reference to a literal.  
(b) Legal initalization assuming that i2 have been defined as an int previously in the same scope.  
(c) Both initializations are legal, i is an int, r is a const reference this time meaning that it is valid to assign it to a literal.  
(d) Legal initalization assuming that i2 have been defined as an int previously in the same scope.  
(e) Legal initalization assuming that i2 have been defined as an int previously in the same scope.  
(f) Not legal, multiple problems with this initialization. Can not really tell what the author of this line is trying to do.  
(g) The initialization of i2 is legal. The initialization of r is legal assuming that i have been defined, as som type that can be converted to int, previously in the same scope.  
