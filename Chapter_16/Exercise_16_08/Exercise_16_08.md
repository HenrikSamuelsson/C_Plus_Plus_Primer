#####Question  
In the Key Concept box on page 108 we noted that as matter of habit C++ programmers prefer using the not equal to operater (!=) over the less than operator (<) for comparison in loops. Explain the rationale for this habit.  
#####Answer  
The not equal to operator is more versatile because all of the standard library containers have iterators that define this operator. Most of those iterators do not define the less than operator.  
