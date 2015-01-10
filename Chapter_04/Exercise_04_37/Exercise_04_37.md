####Question
Assuming the following definitions,  
```cpp
int i;
double d;
const string *ps;
char *pc;
void *pv;
```
rewrite each of the following old-style casts to use a named cast.  
(a) `pv = (void*)ps;`  
(b) `i = int(*pc);`  
(c) `pv = &d;`  
(d) `pc = (char*) pv`  
####Answer  
(a) pv = static_cast<void>(const_cast<string*>(ps));  
(b) i = static_cast<int>(*pc);  
(c) pv = static_cast<void>(&d);  
(d) pc = static_cast<char*>(pv);  
