## Question  
What is the type of the exception object in the following throws?  
(a)
```cpp
range_error r("error");
throw r;
```
(b)
```cpp
exception *p = &r;
throw *p;
```
What would happen if the throw in (b) were written as throw p?  
## Answer  
(a)  
The type of this exception object will be range_error.  

(b)  
The type of this exception object will be execption and not range_error. This is so because if a throw expression dereferences a pointer to base-class type, and that pointer points to a derived-type object, then the thrown object is sliced down and only the base-class part is thrown.  

If the throw was written throw p in (b) so would an execption pointer be thrown.  
