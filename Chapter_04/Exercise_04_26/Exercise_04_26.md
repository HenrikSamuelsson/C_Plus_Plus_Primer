####Question  
In our grading example in this section what would happen if we used unsigned int as the type for quiz1?  
####Answer  
The c++ standard requires that an unsiged int shall be able to hold values up to 65535 ( = 2^16 - 1 ) which implies that an unsigned int is at least 16 bits, it is however usually the case that 32 bits are used to store ints. There were 30 students in the class and each student uses up one bit. This means that it is not 100 percent certain that that the program will work if unsigned int is used.  
