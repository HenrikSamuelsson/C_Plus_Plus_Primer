####Question
Explain the following definitions. For those that are illegal, explain whats's wrong and how to correct it.  
(a)  
```cpp
std::cin >> int input_value;
```
(b)  
```cpp
int i = { 3.14 };
```
(c)  
```cpp
double salary = wage = 9999.99;
```
(d)  
```cpp
int i = 3.14;
```
####Answer  
(a) Not legal to have a definition as a operand to the input operator. Should be written like this:  
```cpp
int input_value;
std::cin >> input_value;
```
(b) Not legal under C++11 because of narrowing conversion. (Some compilers will let this one slip through tough.) Can be written like this instead:
```cpp
double i = { 3.14 }
```
(c) Not legal because wage is used before it is defined. Can be written like this instead:
```cpp
double wage;
double salary = wage = 9999.99;
```
(d)  Will compile, but will cause loss of information because of truncation.
