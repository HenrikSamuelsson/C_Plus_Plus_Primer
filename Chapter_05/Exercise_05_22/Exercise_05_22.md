####Question
The example below, that jumps back to begin, can be better written using a loop. Rewrite the code to eliminate the goto.  
```cpp
begin:
  int sz = get_size();
  if (sz <= 0) {
    goto begin;
  }
```
####Answer
```cpp
while(get_size() <= 0) {
  ; // Dont do anything while size is less than or equal to zero. 
}
```
