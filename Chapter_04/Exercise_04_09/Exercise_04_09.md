####Question
Explain the behavior of the condition in the following if:  
```cpp
const char *cp = "Hello World";
if (cp && *cp) { /* ... */ }
```
####Answer  
This if checks that neither is cp a null pointer nor is the value of what cp points at set to the null character.  
