Below follows a number of faulty functions and my suggestions for corrections.  
```cpp
// (a)
int f() {
  string s;
  // ...
  return s;
}
```
There are multiple issuses with function (a). A string will be returned but the function should return an int, there is no auto conversion from string to int so this will not work. Could write like this instead:  
```cpp
// (a´)
string f() {
  string s;
  // ...
  return s;
}
```
