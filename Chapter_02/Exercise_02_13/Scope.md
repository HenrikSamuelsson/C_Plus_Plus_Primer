What is the value of j in the following program?
```cpp
int i = 42;
int main()
{
  int i = 100;
  int j = i;
}
```
The local version of the variable i is set to 100, it is this variable that will be used in the definition of j. The value of j will hence be 100.
