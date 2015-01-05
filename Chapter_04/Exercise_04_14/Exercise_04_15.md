####Question
Explain what happens in each of the if if test.
(a) `if (42 = i) { /* ... */ }`  
(b) `if (i = 42) { /* ... */ }`  
####Answer  
(a) This code will not compile, it is attempted to assign a value (i) to a literal (42) which cannot be done.  
(b) 42 will be assigned to i in the condition. The result of this assignment will be 42 which in nonzero and hence interpreted as true when the condtion of this if statement is evaluated.  
