####Question
Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expected? If not, figure out why.  
```cpp
int x[10];
int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;
```
####Answer  
sizeof(x) will give the size of the entire array which means 10 ints times the size of an int. sizeof a dereferenced pointer returns the size of an object of the type to which the pointer points. sizeof(*x) will be size of an int because x is an array of ints. The first print statement will hence print 10 (and "new line") regardless of the size of an int since this factor will be divided away.  

sizeof(p) will return the size of a pointer on the current system, will be 4 on my system. sizeof(*p) will, according to above discussion, be the size of an int. The size of int is 4 on my system. 4 divided by 4 equals 1 so 1 (and "new line") will be printed by the second print statement.  
