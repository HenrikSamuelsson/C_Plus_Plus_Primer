####Question
Given the following variable definitions and expressions, explain what conversions take place.
`char cval; double dval; foat fval; int ival;`  
(a) `if (fval)`  
(b) `dval = fval + ival`  
(c) `dval + ival * cval`  
####Answer  
(a) In conditions, nonbool expressions are converted to bool, so fval will be converted to bool.  
(b) ival will be converted to float before the addition. The result of the addition is a float that will be converted to double and then assigned to dval.
(c) The multiplication will be done before the addition, cval will here be promoted to int before the multiplication takes place. The result of the multiplication is converted the double and then added to dval.  

