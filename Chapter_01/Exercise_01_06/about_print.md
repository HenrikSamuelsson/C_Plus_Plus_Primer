The following code fragment is not legal because the << token can not be used without a primary expression.
```cpp
std::cout << "The sum of " << v1;
<< " and " << v2;
<< " is " << v1 + v2 << std::endl;
```
