It is not valid to return a reference to a local object in a function. The local object will be destroyed at the end of function and the reference would refer to memory that is no longer available. One good way to ensure this does not happens is to ask: To what preexisting object is the refence referring?  

The above postulations applies for both plain and const references.   
