####Question
What is the type of elem in the for loop?  
```cpp
void error_msg(ErrCode e, initializer_list<string> il) {
    cout << e.msg() << ": ";
    for (const auto &elem : il)
        cout << elem << " ";
    cout << endl;
}
```
####Answer
The type of elem will be constant string reference i.e.  
```cpp
const std::string&  
```
