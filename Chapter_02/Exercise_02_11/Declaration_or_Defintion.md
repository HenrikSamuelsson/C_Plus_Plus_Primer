Below follows three code snippets and explanations about if they are definitions or only declarations.  

```cpp
extern int ix = 1024;
```
This is declared external so it could be only a declaration if ix wasn't initialized to a value. An initilization ovverides the external key word, meaning that this is a definiton.  

```cpp
int iy;
```
This is a declaration and definition of a int variable called iy.  

```cpp
extern int iz;
```
This is only a declaration. The varibale iz must be defined in some other file, if it shall be safe to use.
