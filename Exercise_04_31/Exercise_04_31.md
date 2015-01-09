####Question  
Using the C++ operator precedence rules explain what the following expression does.  
```cpp
someValue ? ++x, ++y : --x, --y
```
#####Answer
This expression is valid and will be evaluated in the following way:
```cpp
someValue ? (++x, ++y) : (--x, --y)
```
This is because the comma operator have lower precedence than the conditional operator.  

The first operand i.e. ++x, ++y will be executed if someValue is (something interpreted as) true. The entire expression will in this case be evaluted to the result of ++y. 

The other case is if someValue is (something interpreted as) false, this will cause --x, --y to be executed instead. The entire expression will in this case be evaluted to the result of --y.  

Note that y is returned by the expresion but both x and y will be will be altered. We do not know the types of x and y. But it is likely that they are defined as for example be pointers or references to be increased or decreased in the expression.   
