####Question
Recalling the discussion from section 8.1, explain how the program on page 317 that passed in ifstream to the Sales_data read function works.  
####Answer
The read function looks like this:  
```cpp
istream &read(istream &is, Sales_data &item)
{
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}
```
It takes a istream reference as argument. This means that it can also take an argument that inherits from istream and this is true for ifstream that is in deed derived from istream.  

Reference: [cplusplus.com - istream](http://www.cplusplus.com/reference/istream/istream/)
