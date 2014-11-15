Identify the indexing errors in the following code:
```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for(size_t ix = 1; ix <= array_size; ++ix)
  ia[ix] = ix;
```
The ix variable will have be set to 10 in the last round of the loop. But the slots in the array ix are indexed from 0 to 9. This means that this code will write beyond the end of the array and possibly overwrite something else.
