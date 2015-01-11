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
(b) The first problem with this code is that status used in the if statment after it has gone out of scope, status is only valid inside the while statment since it is defined inside the while head.  

The first problem, mentioned above, can be fixed by moving the definition of status into a wider scope:  
```cpp
bool status;
while (status = find(word)) {
  /* ... */
}
if (!status) {
  /* ... */
}
```
This version will at least compile but there is another problem now. The while loop will only exit when status is assigned 0.
This means that the if statment will always run and could hence be ommitted, and just replaced with the code in the body of the if statment.  

Either so I am misintenpreting something, or so did the authors of this exercise not really think things through properly.  
