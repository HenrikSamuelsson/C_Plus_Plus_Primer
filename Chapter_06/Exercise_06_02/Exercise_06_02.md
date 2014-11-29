Below follows a number of faulty functions and my suggestions for corrections.  
```cpp
// (a)
int f() {
  string s;
  // ...
  return s;
}
```
A string will be returned but the function should return an int. There is no auto conversion from string to int so this will not work. Could write like this instead:  
```cpp
// (a´)
string f() {
  string s;
  // ...
  return s;
}
```
  
```cpp
// (b)
f2(int i) { /* ... */ }
```
The type of the return value is missing in (b). It should likely be written like this:
```cpp
// (b´)
void f2(int i) { /* ... */ }
```
  
```cpp
// (c)
int colc(int v1, int v1) /* ... */ }
```
The parameters are not allowed to have the same name and the opening curly brace is missing. Corrected version:
```cpp
// (c´)
int calc(int v1, int v2) { /* ... */ }
```
  
```cpp
// (d)
double square(double x) return x * x;
```
It is not allowed the omit the curly braces around the function body. Corrected version:
```cpp
// (d´)
double square(double x) { return x * x; }
```
