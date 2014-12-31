####Question  
Which, if any, of the following vector definitions are in error? For thos that are legal, explain what the definitions does. For those that are not legal, explain why they are illegal.
(a) `vector<vector<int>> ivec;`  
(b) `vector<string> svec = ivec;`  
(c) `vector<string> svec(10, "null");`  
####Answer
(a) Legal, this is a definition of a vector that holds other vectors holding integers.  
(b) Not legal, assuming that ivec is the vector from directly above in (a), cannot assign ivec to svec because they do not hold elements of the same type.    
(c) Legal, assuming that svec from directly above in (b) have not been fixed and defined since theirs names would then collide. Will create a vector called svec that holds 10 empty strings.  
