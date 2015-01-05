####Question  
Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?  
(a) `ptr != 0 && *ptr++`
(b) `ival++ && ival`
(c) `vec[ival++] <= vec[ival]`

####Answer
(a) The logical AND is guaranteed to start by evaluating the left-hand side, that will check that ptr isn't a null pointer. The right-hand side will be evaluated if and only if ptr isn't a null pointer.

If the right-hand side is indeed evaluted so will ptr be dereferenced. The logical and will evaluate to true if the int that ptr points at is something else than 0. The final thing that happens is that ptr will also be changed so that it points at the next following element in the memory.  

In short, it is checked that p points at an int that isn't 0, and ptr is incremented if it isn't a null pointer. I cannot spot anything wrong with this code.  

(b)  The logical AND is guaranteed to start by evaluating the left-hand side, ival will be incremented. A copy of ivalue will be made before the increment. This copy is used in the evaluation of the left-hand side of the logical AND. The right-hand side will be evaluated if and only if said copy isn't equal to 0, if this is the case so will the incremented version be checked for if it is 0 or not.  

In short this logical expression will become true except when ival is 0 or -1. I cannot spot anything wrong with this code besides that it is a little hard to figure out what it does.  

(c) The problem with this code is that ival is used on both sides and it is not known what side is evaluated first. There are  different possible scenarios.  

Execution if the right-hand side is evaluated first:  
```cpp
vec[ival] <= vec[ival]  // Kind of uselesss code since it will always be true.
```

Execution if the left-hand side is evaluated first:
```cpp
vec[ival] <= vec[ival + 1]  // Probably the original intention of this code.  
```

Note that the compiler might do the evaluation in yet some other way.  
