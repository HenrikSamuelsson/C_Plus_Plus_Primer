####Question
Are the following declarations legal, if not why?  
(a)
```cpp
int ff(int a, int b = 0, int c = 0);
```  
(b) 
```cpp
char *init(int ht = 24, int wd, char bckgrnd);
```
####Answer
(a) 
Legal, this function can be called with one, two, or three arguments.  

(b) 
Not legal, all parameters following an parameter with a default argument must also have default arguments. This problem can easily be fixed by reordering the parameters:
```cpp
char *init(int wd, char bckgrnd, int ht = 24);
```
