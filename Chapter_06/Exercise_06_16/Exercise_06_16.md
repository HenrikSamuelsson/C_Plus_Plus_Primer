####Question
The following function, although legal, is less useful than it might be. Identify and correct the limitation on this function:  
```cpp
bool is_empty(string& s) {
  return s.empty();
}
```
####Answer
The problem is that arguments to this function can not be const string. If this was allowed so could s be used to alter the value of the constant string arguments, the compiler will hence complain if we try to supply a const string to the above function.  

A modified and improved version that can take both plain string and const string would be written like this:  
```cpp
bool is_empty(const string& s) {
  return s.empty();
}
```
