####Question  
Test the program written in en Exercise 1.23 by giving multiple transactions representing multiple ISBN's. The records for each ISBN should be grouped together.  
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
The program kind of works but not really pretty since the output from the program will often be mixed in with the input of the user in a confusing way.  
(The ^Z shows when CTRL+D is entered by the user to indicate end-of-file.)  
