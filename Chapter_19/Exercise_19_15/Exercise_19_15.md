## Question  
What is the difference between an ordinary function pointer and a pointer to a member function?  
## Answer  
Member function pointers are different from regular function pointers. Casting between a member function pointer and a regular function pointer is not possible. The exact difference is compiler dependant but a member function pointer will usually be larger because of extra data that need to be stored to keep track of all aspects of the object that holds the member function.  

The differences are explained further in this article, [Obscure C++ Features](http://madebyevan.com/obscure-cpp-features/).
