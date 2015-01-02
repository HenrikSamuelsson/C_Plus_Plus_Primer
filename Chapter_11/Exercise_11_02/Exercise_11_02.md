####Question
Give an example of when each of list, vector, deque, map, and set might be most useful.  
####Answer
A list is efficient when elements needs to be added or deleted anywhere in the list. Can for example be used for builiding a ranking list in sports or whatever that need to be ranked and then updated frequently.  

A vector is based around an array. Efficient when when random access is needed. Not very efficient if an element shall be added anywhere else than at the end. A vector is for example a good choice when logging data at regular time intervalls such as temperature fluctuations over time. Each new measumerment is stored at the end, and the increased index then symbolises that additonal time has passed.  

Deque is related to vector and they share most properties, one difference is that it is efficent to add elements both at the front and at the end of a deque. A deque can be used to build a queue.  

A map functions like a dictionary that maps a key to a value. Can for example be used to build an address book where the keys will be names of different persons and the value will be these persons postal addresses.  

A set is a list of unique data values. A set can for example be used to keep track of user names in a system. When adding a new user so is the new user name first compared against the existing set of users. The new user name will then only be allowed, and added to the set, if not already present in the set.  
