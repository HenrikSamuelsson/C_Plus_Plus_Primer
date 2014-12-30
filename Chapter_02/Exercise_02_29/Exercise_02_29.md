####Question  
Using the variables in exercise 2.28, which of the following assignments are legal? Explain why.  
(a) `i = ic;`  
(b) `p1 = p3;`  
(c) `p1 = &ic;`  
(d) `p3 = &ic;`  
(e) `p2 = p1;`  
(f) `ic = *p3;`  
####Answer  
(a) Legal, i is an plain int variable that can be reassigned to the value of another int.  
(b) Illegal, p3 points at a const int but p1 is not defined as a const int pointer.  
(c) Illegal, p1 is not of type int pointer so it can not point at a const int variable.  
(d) Illegal, cannot reassign to p3 since it is constant pointer, it can be thought of as a read only variable.  
(e) Legal, it is valid to assign a ordinary pointer to a constant pointer.  
(f) Illegal, ic is constant so the value of this variable cannot be changed.  
