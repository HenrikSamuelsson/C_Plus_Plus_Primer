####Question  
What does the following code print?  
```cpp
  int i, &ri = i;
  
  i = 5;
  ri = 10;
  
  std::cout << i << " " << ri << std::endl;
```
####Answer  
10 10  
