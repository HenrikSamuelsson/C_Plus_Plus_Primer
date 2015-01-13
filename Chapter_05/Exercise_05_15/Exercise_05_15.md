####Question
Explain each of the following loops. Correct any probloms you detect.  
(a)  
```cpp
for (int ix = 0; ix != sz; ++ix) {
  /* ... */
}
if (ix != sz)
  /* ... */
```
(b)  
```cpp
int ix;
for (ix != sz; ++ix) {
  /* ... */
}
```
(c)  
```cpp
for (int ix = 0; ix != sz; ++ix, ++ sz) {
  /* ... */
}
```
####Answer  
All the loops in this exercise are intended to be iterated until ix is the same as sz, because ix starts at 0 and runs up to, not including, sz.  

(a) The problem is that ix is being used while no longer in scope. The definition of ix must be moved outside of the loop:  
```cpp
int ix;
for (ix = 0; ix != sz; ++ix) {
  /* ... */
}
if (ix != sz)
  /* ... */
```

(b) There must be two semicolons in the head of a for loop:
```cpp
int ix;
for (;ix != sz; ++ix) {
  /* ... */
}
```

(c) Note the space between ++ and sz that looks kind of strange, this is however not the main problem because the compiler ignores all whitespaces. The thing with this loop is that it will never terminate (ignoring the special case of sz being equal to zero). This is because sz is increased at the same rate as ix. This is likely not the intention. We can only guess how the code really should be, maybe like the following:  
```cpp
sz = 0;
for (int ix = 0; ix != sz; ++ix) {
  /* ... */
}
```
