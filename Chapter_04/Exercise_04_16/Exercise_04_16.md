####Question  
Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.  
(a) `if (p = getPtr() != 0)`  
(b) `if (i = 1024)`  
####Answer  
(a) The purpose of this code is very likely to first assign p, and then run the body of the if statement if p isn't a null pointer.    
The problem is that the not-equal-to operator have higher precedance than the assignment operator. This will result in the following order of evaluation.  
```cpp
if (p = (getPtr() != 0))
```
The comparison will be made first and p will then be assigned either 1 or 0, meaning that it will point at memory address 1 or be a null pointer.  

The code should probably be written like this:  
```cpp
if ((p = getPtr()) != 0)
```
(b) This is the common error of mixing up assignment with comparison. The code should almost certainly be written like this:
```cpp
if (i == 1024)
```
