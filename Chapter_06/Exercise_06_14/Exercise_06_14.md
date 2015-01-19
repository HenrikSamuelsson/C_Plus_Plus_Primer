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
