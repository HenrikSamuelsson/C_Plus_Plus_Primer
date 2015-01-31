####Question  
Write your own version of the Sales_data class.  
####Answer  
Same as in the book except from chosing the term isbn instead of bookNo.    
```cpp
struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
```
