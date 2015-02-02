####Answer
`r1 = v2;   // legal, no variable is const, changes the value of v1`  

`p1 = p2;   // not legal, p2 is low level const but p1 is a plain pointer`  

`p2 = p1;   // legal, p2 is low level const but can still be assigned by a plain pointer such as p1`  

`p1 = p3;   // not legal, caused by the p3 low level const, top level const of p3 is irrelevant`  

`p2 = p3;   // legal, the reverse (p3 = p2;) would not be legal tough`
