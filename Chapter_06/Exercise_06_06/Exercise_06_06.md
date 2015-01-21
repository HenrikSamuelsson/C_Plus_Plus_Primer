####Question
Explain the difference between a parameter, a local variable, and a local static variable. Give an example of a function in which each might be useful.
####Answer
A parameter makes it possible to send data inte to the function when calling the function.  

A local variable is only visible inside the body of the function and is destroyed once the function have executed.  

A local static variable is only visible inside the body of the function but its value is retained in between different function calls.  

Assume that we have a function that will calculate the average speed for running around a track and also remembers the best average speed. Useful parameters will then be the time it took run and the length of the track. We could then have a local variable for storing the result of an average speed calculations. We could output the latest average speed to the user. This local variable will then also be compared against a static variable that holds the record average speeed. The record would be updated if the latest average speed is better than the record, and we would notify the user that the record have been broken.
