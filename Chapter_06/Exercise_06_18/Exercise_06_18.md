####Question
Write declarations for each of the following functions. When you write these declarations, use the name of the function to indicate what the function does.  
(a) A function named compare that returns a bool and has two parameters that are references to a class named matrix.  
(b) A function named change_val that returns a vector<int> iterator and takes two parameters, the first shall be an int and the other an iterator for a vector<int>.
####Answer
(a) ```bool compare(const matrix &m1, const matrix &m2);```  
(b) ```std::vector<int>::iterator change_val(int i, std::<int>::iterator);```  
