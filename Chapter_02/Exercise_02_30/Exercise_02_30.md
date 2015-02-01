####Question
For each of the following declarations indicate whether the object being declared has top-level or low-level const.
```cpp
const int v2 = 0;   int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```
####Answer
Will separate each declaration on to its own line to make the following discussion more clear.  
`const int v2 = 0;    // const that is top-level, we cannot change the value of v2 `  
`int v1 = v2;         // not const at all, the value of v1 can be changed as we please`  
`int *p1 = &v1;       // not const at all`  
`int &r1 = v1;        // not const at all`  
`const int *p2 = &v2  // const is low level, we can change p2`  
`const int *const p3 = &i;  // right most const is top-level, left most is low-level`  
`const int &r2 = v2;  // const in reference types is always low level`
