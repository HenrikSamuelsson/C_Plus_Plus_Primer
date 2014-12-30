####Question  
Explain the following definitions. Identify any that are illegal.  
(a)`int i, *const cp;`  
(b)`int *p1, *const p2;`  
(c)`const int ic, &r = ic;`  
(d)`const int *const p3;`  
(e)`const int *p;`  
####Answer
(a) Legal definition of i that is defined as an int. Illegal definition of cp that is a constant pointer to int, and muste hence be initialized.  
(b) Legal definition of p1 that is defined as a pointer to int. Illegal definition of p2 that is a constant pointer to int, and muste hence be initialized.  
(c) Illegal definition of ic that is defined as a const int and must hence be initialized. Legal definition of r that is a reference to const int, assuming that the definition of ic is fixed first.  
(d) Illegal definition of constant pointer that points to a const int, p3 must be initialized since it defined as a constant pointer.  
(e) Legal, p is pointer to a constant int.  
