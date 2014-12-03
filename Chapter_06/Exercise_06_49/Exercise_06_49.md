A candidate function is a function with the same name as a called function and for which a declaration is visible at the point of the call. Not that it is possible that there is more than one candidate function since functions can be overloaded in C++.  
  
A candidate function can also be viable. To be viable, a function must have the same number parameters as there are arguments and these arguments must match. An argument matches if it has the same type as the corresponding parameter or at least a type that can be converted to the parameter type.
