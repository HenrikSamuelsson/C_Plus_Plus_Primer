####Question  
What are the inital values, if any,  of each of the following variables?  
```cpp
std::string global_str;
int global_int;

int main() {
  int local_int;
  std::string local_str;
}
```
####Answer  
Global variables, of built in types defined outside of any functions are default initialized. The global int variables will be initialized to 0 by default.  

Unitialized variables of built in types have undefined value when defined inside a function. The local int variable will hence have some undefined garbage value.  

Class type variables will often get a default value whenever defined. This is the case for variables of the string class, that defaults to an empty string.  
