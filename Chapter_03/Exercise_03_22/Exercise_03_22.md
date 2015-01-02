####Question  
Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you have updated text, print its contents.  
####Answer  
```cpp
// Capitalize all letters in the first paragraph.
for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    string temp = *it;
    for (std::string::size_type i=0; i < temp.length(); ++i)
        temp[i] = toupper(temp[i]);
    *it = temp;
}
// Print the entire text.
for (auto it = text.cbegin(); it != text.cend(); ++it)
  cout << *it << endl;
```
