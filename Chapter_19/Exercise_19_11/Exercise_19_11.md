## Question  
What is the difference between an ordinary data pointer and a pointer to a data member?  
## Answer  
An ordinary pointer will point to an object, but a pointer to a data member identifies a member of a class, not an object of that class. A pointer to a member of a class differs from a normal pointer because it has type information for the type of the member and for the class to which the member belongs.  

Source: (MSDN-Pointers to Members)[https://msdn.microsoft.com/en-us/library/f2wbycwh.aspx]
