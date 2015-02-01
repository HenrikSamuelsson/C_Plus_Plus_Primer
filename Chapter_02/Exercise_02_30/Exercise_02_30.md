####Question
For each of the following declarations indicate whether the object being declared has top-level or low-level const.
```cpp
const int v2 = 0;   int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```
####Answer
Will sepearate each declaration on to its own line to make the following discussion more clear.  
`const int v2 = 0;` A const that is top-level, we cannot change the value of v2. 
```cpp
int v1 = v2;
```
Not const, the value of v1 can be changed as we please.  
