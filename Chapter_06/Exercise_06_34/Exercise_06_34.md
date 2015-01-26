####Question
What would happen if the stopping condition in factorial were  
```cpp
if (val != 0)
```
####Answer
This solution works equally well.  

Note however that recursion would never terminate if called with a negative integer and eventually cause a stack overflow.

But there exists no factorial for negative integers anyway, so this is not really an problem. If this was real production code so should this function be written to be able to handle illegal calls with negative input, by for example throwing an exception.
