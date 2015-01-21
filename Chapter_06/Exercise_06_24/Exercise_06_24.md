####Question
Explain the behavior of the following function. If there are problems in the code, explain what they are and how you might fix them.  
```cpp
void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}
```
####Answer
There is not really anything wrong with this code, it will compile and we can print arrays that have exactly ten elements with it.  

Trying to printing shorter arrays with this function will however not work well. It would print the values in the array and then happily continue to print wathever found in the next sequential memory locations. Printing longer arrrays would not work since only the 10 first elements would be printed.  

A more versatile function would take an additional parameter that holds the size of the array and then take this value into account when printing.  
