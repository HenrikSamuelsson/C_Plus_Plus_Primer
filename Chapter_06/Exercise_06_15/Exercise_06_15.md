####Question
Explain the rationale for the type of each of find_chars's parameters. In particular, why is s a reference to const but occurs is a plain reference? Why are these parameters references, but the char parameter c is not? What would happen if we made s a plain reference? What if we made occurs a reference to const?
####Answer
The reason that s is a reference to const is that it is not supposed to be altered by find_char. As opposed to the parameter occurs that shall be thought of as an out parameter, and must hence be able to be altered by find_char. Making s const means that the program would not compile if s was accidently altered by the code in find_char.  

Another reason for s being const is that it makes it possible use both const and non const strings as arguments. A const string could not be an argument if the s parameter was a non const reference.

The char parameter is not a reference because it would not be possible to call the function with a char literal if it was a reference. The reason for this is that it makes no sense to modify the value of a string literal, and it then follows that a non const reference can not be bound to a literal.  

It would be possible to make s a plain reference and still be able to compile the code. It is however, as stated above, better to declare it const since s is not suposed to be altered by find_char.  

The parameter occurs can not be a reference to const since its value is altered inside the body of find_char. The program would not compile if occurs was declared as const.  
