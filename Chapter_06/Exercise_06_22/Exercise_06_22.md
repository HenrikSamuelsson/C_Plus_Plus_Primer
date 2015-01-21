####Question
Write a function to swap two int pointers.  
####Answer
```cpp
void swap(int** p, int** q) {
    int* t = *p;
    *p = *q;
    *q = t;
}
```
