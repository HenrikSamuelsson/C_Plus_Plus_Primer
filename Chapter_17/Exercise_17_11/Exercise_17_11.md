#####Question  
Define a data structure that contains an integral object to track responses to a true/false quiz containing 10 questions. What changes, if any, would you need to make in your data structure if the quiz had 100 questions?  
#####Answer  
A bitset can be used for this. Each bit will represent the answer to a question. A bit set to one can be interpreted as true and a bit set to zero means false. A constant int can be used to set the size of the bit set so that it is easy to adapt the code if the number of questions changes.  
```cpp
const int NUMBER_OF_QUESTIONS = 10;
bitset<NUMBER_OF_QUESTIONS> answers();
```
