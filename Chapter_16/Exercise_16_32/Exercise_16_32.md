#####Question  
What happens during template argument deduction?  
#####Answer  
The compiler will use the types of the arguments in the call to find the template arguments that generate a version of the function that best matches the given call.  

A limited number of automatic conversions are possible during template argument deduction, these are  
+ const converisons: A function parameter that is a reference (or pointer) to a const can be passed a refernce (or pointer) to a non-const object.
+ Array- or function-to-pointer conversions: If the function parameter is not a reference type, then the normal pointer conversion will be applied to arguments of array or function type. An array argument will be converted to a pointer to its first element. Similarly, a function argument will be converted to a pointer to the function's type.  
