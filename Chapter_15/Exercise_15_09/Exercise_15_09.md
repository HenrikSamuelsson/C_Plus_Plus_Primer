####Question
When is it possible for an expression's static type to differ from its dynamic type? Give three examples in which the static and dynamic type differ.  
####Answer
A reference or pointer to an object that have a type that is derived can be bound to an object of its base class type.  

Examples: A pointer to to Qoute* can point at a Bulk_quote object. A Qoute& can refer to Bulk_quote object. A Qoute& can also refer to a Limited_discount_qoute object (see exercise 15.7).  
