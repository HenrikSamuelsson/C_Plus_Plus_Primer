####Question  
Assuming p is a pointer to int, explain the following code:  
(a)
```cpp
if (p) // ...
```
(b)
```cpp
if (*p) // ...
```
####Answer  
(a) The condition that this statement is based on will evalute to true if p points to something, i.e. the pointer p is not equal to 0.  
(b) The condition that this statement is based around will evaluate to true if the value of the int variable that p points at is currently set to anything else than 0.  
