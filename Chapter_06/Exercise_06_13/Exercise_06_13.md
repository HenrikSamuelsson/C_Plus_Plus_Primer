####Question
Assuming T is the name of a type, explain the difference between a function declared as void f(T) and void f(T&).  
####Answer
The function declared as f(T) will do its work on a copy of the T argument, if it changes the value so will the original value remain unchanged. The function declared with a parameter that is a reference to T will possibly change the original value during the function execution.  
