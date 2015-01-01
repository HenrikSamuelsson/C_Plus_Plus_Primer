####Question  
Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you have updated text, print its contents.  
####Answer  
```cpp
// Capitalize all letters in the first paragraph.
for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
  if(isalpha(*it))
    *it = toupper(*it);
    
// Print the entire text.
for (auto it = text.cbegin(); it != text.cend(); ++it)
  cout << *it << endl;
```
