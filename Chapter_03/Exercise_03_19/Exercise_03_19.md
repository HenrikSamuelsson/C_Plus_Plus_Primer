####Question
List three ways to define a vector and give it ten elements, each with the value 42. Indicate wheter there is a preferred way to do so and why.  
####Answer  
```cpp
vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
vector<int> v2(10, 42);
vector<int> v3;
for (int i = 0; i < 10; i++) {
  v3.pushback(42);
}
```
There is no clear winner. The definition of v2 is the shortest one which is good, but this is also by far the most cryptic one. It it also limited to defining all elements to identical values this is not the case with the definitons of v1 and v3.  
