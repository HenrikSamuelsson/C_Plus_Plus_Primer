Parenthesize the following expressions to indicate the order in which the operands are grouped:
```cpp
* vec.begin()       // (a)
* vec.begin() + 1   // (b)
```
The expressions will be evaluated like this:
```cpp
* ( ( vec.begin ) () )            // (a)
( * ( ( vec.begin ) () ) ) + 1    // (b)
```
