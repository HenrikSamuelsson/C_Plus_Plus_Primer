#####Question  
Is the following code legal or not? If not, how might you make it legal?
```cpp
int null = 0, *p = null;
```
####Answer  
The code is not legal because the types do not match, null is of type int and p is of type pointer to int.  

One way to get a working code would be to git rid of the null variable and just write:  
```cpp
int *p = 0;
```
The intent of the above code is a bit more clear if the special nullptr literal is used instead:  
```cpp
int *p = nullptr;
```
We could also fix the original code by using a cast (see chapter 4 in the book):  
```cpp
int null = 0, *p = reinterpret_cast<int*>(null);
```
