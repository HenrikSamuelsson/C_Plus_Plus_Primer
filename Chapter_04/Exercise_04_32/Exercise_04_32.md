####Question  
Explain the following loop.
```cpp
constexpr int size = 5;
int ia[size] = {1, 2, 3, 4, 5};
for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {
  /* ... */
}
```
####Answer  
This loop will step through each postion in the array. It uses an unnecessary complicated logical expression for termination of the loop. The exact same check is done is done if two different ways.  

The first version of the check uses an int called ix that is inceremented until the size of the array is reached.  

The second version of the check uses a pointer, called ptr that at first is assigned to the beginning of the array and then incremented until it points at the end of the array.  

Note how the comma operator is used to alter both ptr and ix the loop head.  
