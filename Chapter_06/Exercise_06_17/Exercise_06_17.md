####Question
Write a function to determine whether a string contains any capital letters. Write a function to change a string to all lowercase. Do the parameters you used in these functions have the same type? If so, why? If not, why not?
####Answer
The code can look something like this:  
```cpp
void to_lowercase(string &s) {
    for(auto &c : s) {
        c = tolower(c);
    }
}

bool contains_capital_letter(const string &s) {
    for (auto c : s) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}
```
The function to_lowercase will change its argument s, so it can not be declared const.

The function contains_capital_letter will on the other hand only read the content of its argument, so it can be declared const. This is good because it makes it possible to use the function for both plain strings and constant strings. We can for example do the following, which would not be possible without having the function parameter qualified as const:  
```cpp
if ("Hello World!") {
    /* ... */
}
```
