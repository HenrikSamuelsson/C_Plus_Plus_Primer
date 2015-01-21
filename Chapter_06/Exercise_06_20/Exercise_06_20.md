####Question
When should reference parameters be reference to const? What happens if we make a parameter a plain reference to const? What happens if we make a parameter a plain reference when it could be a reference to const?  
####Answer
A reference parameter that shall only be read in the function and not written to shall always be a reference to const. The reference could be changed by mistake in the function if it was a plain reference. Plain references also limits the types of values that can be used as arguments when calling the function. Literals and const-qualified values can not be used as arguments to a function that have been declared with a plain reference parameter.  
