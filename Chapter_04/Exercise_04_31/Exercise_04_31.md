####Question  
The code snippet below uses the prefix version of the increment and decrement operators. Explain why the prefix was used and not postfix. Also write the snippet using postfix operators.  
```cpp
vector<int>::size_type cnt = ivec.size();

// Assign all positions of ivec, starhing value shall be size of ivec, continue counting downwards to 1.
for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
ivec[ix] = cnt;
```
####Answer
The postfix version is in some situations more expensive than the prefix version, because objects may have to be copied. This means that it is a good habit to use the prefix version as often as possible. This is why the prefix version is used in the example program in this exercise.  

The equivalent code snippet using postfix: 
```cpp
vector<int>::size_type cnt = ivec.size();

// Assign all positions of ivec, starhing value shall be size of ivec, continue counting downwards to 1.
for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
ivec[ix] = cnt;
```
