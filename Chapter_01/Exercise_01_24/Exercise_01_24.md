####Question  
Test the program written in Exercise 1.23 by giving multiple transactions representing multiple ISBN's. The records for each ISBN should be grouped together.  
####Answer
A test run of the program can for example look like this.  
```
1 10 20.0
1 20 18.0
1 5 25.0
2 4 55.0
Book with isbn 1 occurred in 3 transactions.
2 8 50.0
^Z
Book with isbn 2 occurred in 2 transactions.
```
The program kind of works but the input and output is mixed together in a confusing way. This could be improved by using techniques presented later on in the book.  

(The ^Z shows up in the console when CTRL+Z is entered by the user to indicate end-of-file.)  
