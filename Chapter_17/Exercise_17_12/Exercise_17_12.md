#####Question  
Using the data structure from the previous question, write a function that takes a question number and a value to indicate a true/false answer and updates the quiz results accordingly.
#####Answer  
Will reuse the class created in the previous exercise and add a function called setAnswer:  
```cpp
class QuizData {
public:
    static const int NUMBER_OF_QUESTIONS = 10;
    bitset<NUMBER_OF_QUESTIONS> answers;
    void setAnswer(int qNr, bool answer) {
        answer ? answers.set(qNr) : answers.reset(qNr);
    }
};
```
