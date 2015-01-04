####Question
Assumming i, j, and k are all of int type, explain what  
```cpp
i != j < k
```
means.  
####Answer  
This expression will be evaluated in the following order
```cpp
i != (j < k)
```
because the inequality operator have lower precedance than the less than operator. The expression j < k will hence be evaluated first to either true or false either. True will be represented as, 1 and false as 0. Assume that j is less than k we then get  
```cpp
i != 1
```
Which will evaluate to true for all i not equal to 1, and false otherwise. Now assume that k is less than j we will then get  
```cpp
i != 0
```
Which will evaluate to true for all i not equal to 0, and false otherwise.  

The expression evaluated in this exercise is obviously not a good way to write code since it is kind of hard to interpret.  
