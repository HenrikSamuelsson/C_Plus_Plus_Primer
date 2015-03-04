## Question  
When should you use a dynamic_cast instead of a virtual function?  
## Answer  
You should almost never use a dynamic_cast instead of a virtual function but as with every rule there are exceptions.  

There are situations when virtual functions does not work. For example so cannot a virtual function be used if there is a non abstract class in the hierarchy that does not implement it.  

Using dynamic cast can also give better performance in ceritain situations.  

This question is discussed further at [Stackoverflow](http://stackoverflow.com/questions/5776777/what-is-the-proper-use-case-for-dynamic-cast).
