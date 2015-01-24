####Question
Revise tha arrPtr function to return a reference to the array.
####Answer  
```cpp
decltype(odd) &arrPtr(int i) {
  return (i % 2) ? odd : even;
}
```
