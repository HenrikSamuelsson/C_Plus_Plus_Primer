Belows follows two defintions:  
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```
The first line will assign 9 to the month variable and 7 to the day variable. The second line uses octal notation in the assigment process, with the intention of doing the same thing as the first line. The second line is however not correct and will not compile. This is because the only valid symbols when writing octal is 0 to 7. A correct version can be written like this:
```cpp
int month = 011, day = 07;
```
