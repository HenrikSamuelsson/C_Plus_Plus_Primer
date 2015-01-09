####Question  
The code snippet below uses the prefix version of the increment and decrement operators. Explain why the prefix was used and not postfix. Also rewrite the code using postfix operators.  
```cpp
vector<int>::size_type cnt = ivec.size();

// Assign all positions of ivec, starhing value shall be size of ivec, continue counting downwards to 1.
for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
ivec[ix] = cnt;
```
####Answer
The postfix version is in some situations more expensive than the prefix version, because objects may have to be copied. This means that it is a good habit to use the prefix version as often as possible, this is why the prefix version was used.

The equivalent code snippet using postfix: 
```cpp
vector<int>::size_type cnt = ivec.size();

// Assign all positions of ivec, starhing value shall be size of ivec, continue counting downwards to 1.
for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
ivec[ix] = cnt;
```
