####Question  
Using the C++ precedence rules, parenthesize the following expressions to match the default evaluation.  
(a) `sizeof x + y`  
(b) `sizeof p->mem[i]`  
(c) `sizeof a < b`  
(d) `sizeof f()`  
####Answer  
(a) `(sizeof x) + y`  
(b) `sizeof ((p->mem)[i])`  
(c) `(sizeof a) < b`  
(d) `sizeof (f())`  
