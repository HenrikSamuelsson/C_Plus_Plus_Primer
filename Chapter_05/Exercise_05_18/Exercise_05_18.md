####Question
Explain each of the following loops. Correct any problems you detect.  
(a)
```cpp
do
  int v1, v2;
cout << "Please enter two numbers to sum:" ;
if(cin >> v1 >> v2)
    cout << "Sum is: " << v1 + v2 << endl;
while(cin);
```
(b)
```cpp
do {
  // ...
} while (int ival = get_response());
```
(c)
```cpp
do {
  int ival = get_response();
} while (ival);
```
####Answer
(a) Loop that lets the user add numbers repeatedly. The problem is that the braces are missing. Should be like this:
```cpp
do {
  int v1, v2;
  cout << "Please enter two numbers to sum:" ;
  if(cin >> v1 >> v2)
    cout << "Sum is: " << v1 + v2 << endl;
} while(cin);
```
(b) A do while that is illegal because it is not allowed to have a definition inside the condition. Corrected version:
```cpp
int ival;
do {
  // ...
} while (ival = get_response());
```
(c) A do while loop where an int defined inside the loop is used when being out of scope. Corrected version: 
```cpp
int ival;
do {
    ival = get_response();
} while (ival);
```
