####Question  
What does the following program do? Is it valid? If not, why not?  
```cpp
string s;
cout << s[0] << endl;
```
####Answer  
The string s will be initialized to an empty string that has size 0. The code then uses the subscript 0 to access the first element in the string. This is not valid code since the string does not have any elements at all.  

When using a subscript so must it be ensured that that the subscript is in range.  

The library is not required to check the value of an subscript. The result of using an out-of-range subscript is undefined.  
