####Question
In the call to factiorial, why did we pass `val - 1` rather than `val--`?
####Answer
Passing `val--` would cause the original value to be passed as argument for the recursion call because the post fix decrement takes place after the value is used. This would meen that every recursion call would get the same value and the program would never terminate. It would instead eventually crash because of stack overflow.  

Using the function for the trivial values of 1 or 0 would however still be computed correctly because calculating those requires zero recursive calls.  
