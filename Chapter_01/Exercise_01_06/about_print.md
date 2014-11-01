The following code fragment is not legal because the << token can not be used without a primary expression.
```cpp
std::cout << "The sum of " << v1;
&nbsp;&nbsp;&nbsp;&nbsp;<< " and " << v2;
&nbsp;&nbsp;&nbsp;&nbsp;<< " is " << v1 + v2 << std::endl;
```
A valid version could be written like this.
```cpp
std::cout << "The sum of " << v1;
std::cout << " and " << v2;
std::cout << " is " << v1 + v2 << std::endl;
```
