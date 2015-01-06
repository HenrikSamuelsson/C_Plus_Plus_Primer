####Question
How many elements do b1 and b2 have at the end of this code?  
```cpp
StrBlob b1;
{
  StrBlob b2 = {"a", "an", "the"};
  b1 = b2;
  b2.push_back("about");
}
```
####Answer  
The data in i StrBlob is stored by the use of ai shared_ptr. The two StrBlob objects b1 and b2 are set to be equal in the code. This means that b1 and b2 will share the same elements.  

b2 goes out of scope at the end of the code and can no longer be used. But the elements in the memory that b2 pointed at will be preserved since b1 is still using them. b1 holds a total of four elements at the end of the code.  
