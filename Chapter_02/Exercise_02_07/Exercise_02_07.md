####Question  
What values do the following literals represent and what type does each have?  
```cpp
"Who goes with F\145rgus?\012"    // (a)
3.14e1L                           // (b)
1024f                             // (c)
3.14L                             // (d)
```
####Answer  
(a) \145 and \012 indicates numbers written in octal. The corresponding character codes in the ASCII table are "e" and "new line". This means that the literal represents the text "Who goes with Ferguson?" plus a new line indication. The type is string.  

(b) Represents 31.4 of type long double.  

(c) Not allowed to write in this way (at least not with my compiler), should probably be 1024.0f. Will then represent the number 1024 of type float.  

(d) Represents 3.14 of type long double.  
