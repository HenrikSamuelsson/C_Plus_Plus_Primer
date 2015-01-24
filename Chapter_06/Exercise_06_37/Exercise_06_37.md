####Question
Write three additional declarations for the function in the previous exercise. One should use a type alias, one should use a trailing return, and the third should use decltype. Which form do you prefer and why?  
####Answer
Version based on a type alias:
```cpp
using arr_t = string[10];
arr_t& f1();
```

Version based on trailing return type:
```cpp
auto f2() -> string(&)[10];
```

Version based on decltype:
```cpp
string a[10];
decltype(a) &f3();
```
