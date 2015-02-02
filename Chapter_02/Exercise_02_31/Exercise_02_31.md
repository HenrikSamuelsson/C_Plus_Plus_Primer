####Answer
`r1 = v2;   // legal, no variable is const, changes the value of v1`  
`p1 = p2;   // not legal, p2 is low level const but p1 is a plain pointer`  
`p2 = p1;   // legal, p2 is low level const that can be assingned to a plain pointer, such as p1`  
```p1 = p3;   // not legal, p3 is both low level and top level const,  
            // it is only the low level const restriction that poses a problem```  
`p2 = p3;   // legal, the reverse (p3 = p2;) would not be legal tough`
