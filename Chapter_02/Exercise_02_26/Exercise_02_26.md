####Question
Which of the following are legal? For those that are illegal, explain why.  
(a)
```cpp
const int buf;
```
(b)
```cpp
int cnt = 0;
```
(c)
```cpp
const int sz = cnt;
```
(d)
```cpp
++cnt; ++sz;
```
####Answer  
(a) Illegal a const variable must be initialized.  
(b) Legal.  
(c) Legal, assuming that cnt have been initialized.  
(d) Incrementing cnt is legal. It is not legal to increment sz.   
