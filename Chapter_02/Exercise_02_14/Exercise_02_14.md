####Question  
Is the following code snippet legal? If so, what values are printed?  
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
  sum += i;
std::cout << i << " " << sum << std::endl;
```
####Answer
The code is legal. The variable i defined two times but this allowed since the definitons are made in two different scopes. The output will be:  
```
100 45
```
