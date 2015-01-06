####Question  
What would happen in the following while loop if the prefix operator was used instead of the current postfix verison?  
```cpp
auto pbeg = v.begin();
// Prints elements up to the first negative value.
while (pbeg != v.end() && *pbeg >= 0)
  cout << *pbeg++ << endl; // Print the current value and advance pbeg.
```
####Answer  
The first value in v would not be printed and possibly so could the value on step past the end of v be derefenced and printed.  
