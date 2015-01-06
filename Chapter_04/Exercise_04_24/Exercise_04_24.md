####Question
Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.  
#####Answer
This is the affected line of code.  
```cpp
finalgrade = (grade > 90) ? "high pass" : (grade < 60 ) ? "fail" : "pass";
```
The fact that the conditional operator is right to left associative makes the code being interpreted like this:  
```cpp
finalgrade = (grade > 90) ? "high pass" : ((grade < 60 ) ? "fail" : "pass");
```
If the conditional operator was left to right associative so would the code have been interpreted like this:  
```cpp
finalgrade = ((grade > 90) ? "high pass" : (grade < 60 )) ? "fail" : "pass";
```
But this code would not even compile because the second and third operand would have a combination of types that is illegal. A list of legal operand combinations can be found [here](http://msdn.microsoft.com/en-us/library/e4213hs1.aspx).  
