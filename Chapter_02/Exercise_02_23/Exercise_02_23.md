####Question  
Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?  
####Answer
It can generally not be determined wheter p points to a valid object or not. Under most compilers, when we use an uninitialized pointer so will whathever bits found at the location of p in the memory be used as an address.  
