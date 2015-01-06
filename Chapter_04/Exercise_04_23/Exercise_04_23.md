####Question  
The following expressions fails to compile due to operator precedence. Explain how it fails. How would you fix it?  
```cpp
string s = "word";
string p1 = s + s[s.size() - 1] == 's' ? "" : "s" ;
```
####Answer  
The second statement in this exercise can be thought of as being evaluted in the following order.  
```cpp
string p1 = "word" + s[4 - 1] == 's' ? "" : "s" ;
```
```cpp
string p1 = "word" + s[3] == 's' ? "" : "s" ;
```
```cpp
string p1 = "word" + 'd' == 's' ? "" : "s" ;
```
```cpp
string p1 = "wordd" == 's' ? "" : "s" ;
```
``````cpp
string p1 = ("wordd" == 's') ? "" : "s" ;
```
An comparison between a string and a char is tried in the last step. This is not allowed and will not compile.  

A couple of extra parentheses is needed to fix the code:
```cpp
// Fixed working version.
string s = "word";
string p1 = s + ((s[s.size() - 1] == 's') ? "" : "s") ;
```
