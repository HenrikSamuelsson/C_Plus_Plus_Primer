####Question  
The while loop is particulary good at executing while some condition holds; for example, when we need to read values until end-of-file. The for loop is generally thought of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop costruct. If you could use only one loop, which would you choose? Why?  
####Answer  
The while loop is as mentioned in the question the most obvious choice when reading data of unknown length from a file.  
```cpp
while (inFile >> n) {
  sum += n;
}
```
Doing the same thing with a for loop does not actually have to be much different, but is in deed a little more complicated to read.    
```cpp
for (;inFile >> n;) {
    sum += n;
}
```
For loops are on the other hand the natural choice when it is known ahead how many times the loop shall be run.  
```cpp
for(int i = 1; i <= 10; ++i) {
  cout << i*i << endl;
}
```
Doing the same thing with a while loop is a bit more akward.  
```cpp
int i = 1;
while (i <= 10) {
  cout << i*i << endl;
  ++i;
}
```
I personally like for loops a lot because everything that controls the loop is collected in such a nice way in the head of the loop. Would hence choose for loops over while loops if I could only take one.  
