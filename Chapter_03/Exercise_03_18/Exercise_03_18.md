####Question  
Is the following program legal? If not how might you fix it?  
```cpp
vector<int> ivec;
ivec[0] = 42;
```
####Answer  
No this program is not legal. The vector ivec has no elements because it is an empty vector. It is an serious error to try to subscript this vector. One way to resolve this problem is to use push_back that will add elements to the vector.  
```cpp
vector<int> ivec;
ivec.push_back(42);
```
