####Question  
Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?  
(a) `ptr != 0 && *ptr++`
(b) `ival++ && ival`
(c) `vec[ival++] <= vec[ival]`

####Annswer  
(c) The problem with this code is that ival is used on both sides and it is not known what side is evaluated first. There are two different scenarios that can happen.  

Execution if the right-hand side is evaluated first:  
```cpp
vec[ival] <= vec[ival]  // Kind of uselesss code since it will always be true.
```

Executioon if the left-hand side is evaluated first:
```cpp
vec[ival] <= vec[ival + 1]  // Probably the original intention of this code.  
```
