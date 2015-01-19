####Question
Give an example of when a parameter should be a reference type. Give an example of when a parameter should not be a reference.  
####Answer
One example of when a paremeter should be a reference type is when a function shall return more than one value.  
```cpp
void circle_calc(double r, double &area, double &circumference) {
    area = 3.141592653589793238463 * r * r;
    circumference = 2 * 3.141592653589793238463 * r;
}
```
Dont use reference parameters for functions that shall return a single value and all parameters are of built-in types. Since tho code will most likely run slower, because references are typically implemented using pointers, and dereferencing a pointer is slower than accessing it directly. It would also be confusing for others reading the code because it looks like the function will alter its arguments.  

Below is a typical example when parameters should not be references.
```cpp
int rectangle_area(int heigth, int width) {
    return heigth * width;
}
```
Reference: [Passing arguments by reference](http://www.learncpp.com/cpp-tutorial/73-passing-arguments-by-reference/)  
