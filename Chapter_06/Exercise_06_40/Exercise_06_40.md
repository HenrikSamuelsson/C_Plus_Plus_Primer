####Question
Are the following declarations legal, if not why?
(a) `int ff(int a, int b = 0, int c = 0)`  
(b) `char *init(int ht = 24, int wd, char bckgrnd)`  
####Answer
(a) Legal, this function can be called with one, two, or three arguments.  
(b) Not legal, all parameters following an parameter with a default argument must also have default arguments.  
