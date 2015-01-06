####Question  
The following expressions fails to compile due to operator precedence. Explain how it fails. How would you fix it?  
```cpp
string s = "word";
string pl = s + s[s.size() - 1] == 's' ? "" : "s" ;
```
####Answer  
The second statement in this exercise can be thought of as being evaluted in the following order.  
```cpp
string pl = "word" + s[4 - 1] == 's' ? "" : "s" ;
```
```cpp
string pl = "word" + s[3] == 's' ? "" : "s" ;
```
```cpp
string pl = "word" + 'd' == 's' ? "" : "s" ;
```
```cpp
string pl = "wordd" == 's' ? "" : "s" ;
```
``````cpp
string pl = ("wordd" == 's') ? "" : "s" ;
```
An comparison between a string and a char is tried in the last step. This is not allowed and will not compile.  

A pair of extra parentheses is needed to fix the code:
```cpp
// Fixed working version.
string s = "word";
string pl = s + ((s[s.size() - 1] == 's') ? "" : "s") ;
```
