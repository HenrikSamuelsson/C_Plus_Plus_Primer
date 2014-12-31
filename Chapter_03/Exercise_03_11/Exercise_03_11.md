####Question
Is the following range for legal? If so, what is the type of c?  
```cpp
const string s = "Keep out!";
for (auto &c : s) {
  /* ... */
}
```
####Answer  
Yes this is a legal range for. The type of c will be a constant char reference. This means that c will be read only.  
