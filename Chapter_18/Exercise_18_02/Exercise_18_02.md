## Question  
Explain what happens if an exception occurs at the indicated point:  
```cpp
void exercise(int *b, int *e) {
  vector<int> v(b, e);
  int *p  = new int[v.size()];
  ifstream in("ints");
  // exception occurs here
}
```
## Answer  
The destructors for v and in will be run during the stack unwinding but p will not be deleted so this would cause a memory leak.  
