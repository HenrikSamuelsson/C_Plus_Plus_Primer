####Question  
Given the following defintions,  
```cpp
char cval;    int ival;     unsigned int ui;
float fval;   double dval;
```
identify the implicit type conversion, if any, taking place in the following expressions.  
(a) `cval = 'a' + 3;`  
(b) `fval = ui - ival * 1.0;`   
(c) `dval = ui * fval;`  
(d) `cval = ival + fval + dval;`  
####Answer
(a) The char variable 'a' will be promoted to int, this int will be added with the int literal 3. The result of the addition is an int that is converted to char and assigned to cval.  

(b) The multiplication will be evalauted first. The literal 1.0 have the type double so ival will be implcitly converted to double before the multiplication is done. ui will be converted to double since the other operand of the subtraction is the result from the multiplicaton which is a double. The result of the subtraction shall be assigned to a char, this means that a conversion from double to char will be done.  

(c) The multiplication requires ui to be converted to float. The result of the multiplication will be assgined to a double meaning that a implcit conversion from float to double will take place.  

(d) ival will first be converted to float. First additon takes place. Result is converted to double. Second addition takes place, the result is a double. The result from the additons is then converted from doublo to char and assigned to cval.  
