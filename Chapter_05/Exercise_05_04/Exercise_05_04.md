####Question
Explain each of the following examples, and correct any problems you detect.  
(a)  
```cpp
while(string::iterator iter != s.end()) {
/* ... */
}
```
(b)
```cpp
while(bool status = find(word)) {
/* ... */
}
```
####Answer
(a) The idea of this loop is to iterate through each element in s. The problem is that iter is not defined properly. Iter must be defined outside of the loop head and initialized to to the beginning of s.  

Corrected version:  
```cpp
string::iterator iter = s.begin();
while(iter != s.end()) {
/* ... */
}
```


