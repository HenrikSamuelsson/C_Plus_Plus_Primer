####Question
Write the declaration for a function that returns a reference to an array of ten strings, without using either a trailing return, decltype, or a type alias.  
####Answer
Lets the name the function f, the declaration then becomes:  
```cpp
string (&f()) [10];
```
