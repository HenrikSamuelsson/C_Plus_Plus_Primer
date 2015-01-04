####Question
Explain when operands are evaluated it the logical AND, logical OR, and equality operators.  
####Answer  
The logical AND and OR operators will always evaluate their left operand before the right. The right operand might not get evaluated at all because it can be possible to know the end result already before considering the right operand.  

*  The right side of a logical AND will be evaluated if and only if the left side evaluated to true.  
*  The right side of a logical OR will be evaluated if and only if the left side evaluated to false.  

This strategy is known i short-circuit evaluation, it can make programs more effective, it also makes it possible to write code that uses the left-hand operand to check if it is safe to evaluate the right-hand operand.  
