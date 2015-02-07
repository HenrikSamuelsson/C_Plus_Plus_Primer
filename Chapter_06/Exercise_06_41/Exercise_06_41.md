#####Question  
Assume the following declaration:  
```cpp
char *init(int ht, int wd = 80, char bckgrnd = ' ');
```
Which, if any, of the following calls are illegal? Which, if any, are legal but unlikely to match the programmer's intent? Why?  
(a)
```cpp
init();
```
(b)
```cpp
init(24, 10);
```
(c)
```cpp
init(14, '*');
```
#####Answer  
(a) Illegal, there is no default argument set for the ht parameter so a value must be provided.  

(b) Legal, ht = 24, wd = 10, and bckgrnd = ' ' set by the dfault argument.  

(c) Legal, ht = 14, wd = 42, bckgrnd = ' ', wd ges the value 42 on my system because the character '*' will be converted to an int using the ASCII table and then assigned to wd. This function call will work but it is likely that there has been a mixup and the '*' was intended to be used to set bckrgnd.  
