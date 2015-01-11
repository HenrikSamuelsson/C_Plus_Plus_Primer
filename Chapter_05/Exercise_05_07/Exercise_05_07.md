####Question  
Correct the errors in each of the following code fragments:  
(a)  
```cpp
if (ival1 != ival2)
  ival1 = ival2
else ival1 = ival2 = 0;
```
(b)  
```cpp
if (ival < minval)
minval = ival1;
occurs = 1;
```
(c)  
```cpp
if (int ival = get_value())
  cout << "ival = " << ival << endl;
if (!ival)
  cout << "ival = 0\n";
```
(d)  
```cpp
if(ival = 0)
  ival = get_value();
```
####Answer  
(a) Missing semicolon and bad indentation style in the original. Fixed version:
```cpp
if (ival1 != ival2)
  ival1 = ival2;
else 
  ival1 = ival2 = 0;
```
(b) No syntax error but possibly a logic error in the original because the indentation looks strange. Should maybe be like this:
```cpp
if (ival < minval)
  minval = ival1;
occurs = 1;
```
Or possibly like this:
```cpp
if (ival < minval) {
  minval = ival1;
  occurs = 1;
}
```
(c)  The second if should be replaced by an else:  
```cpp
if (int ival = get_value())
  cout << "ival = " << ival << endl;
else 
  cout << "ival = 0\n";
```
The variable ival is just temporarly will be lost when the first if ends. The code could hence be optimized by removing the entire if-else structure and just write:  
```cpp
cout << "ival = " << get_value() << endl;
```
(d) The assignment in the if shall be a comparison:  
```cpp
if(ival == 0)
  ival = get_value();
```
