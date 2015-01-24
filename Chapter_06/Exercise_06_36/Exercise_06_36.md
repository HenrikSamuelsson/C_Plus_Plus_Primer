####Question
Write the declaration for a function that returns a reference to an array of ten strings, without using either a trailing return, decltype, or a type alias.  
####Answer
Lets the name the function f, the requested declaration can then be written like:  
```cpp
string (&f()) [10];
```
