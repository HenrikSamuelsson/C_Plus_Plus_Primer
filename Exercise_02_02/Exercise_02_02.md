####Question
To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.  
####Answer
Floating points representation shall generally not be used for fiscal calculations since small errors can be introduced because of rounding. Accountants and the tax authorites tend to dislike situations were the numbers do not add up.
  
Currency amounts can instead be stored as whole numbers by storing in cents (or similar). For example so can the amount 12.99 be stored in an int as 129900 in the back-end system and then converted to 12.99 just before being presented to the user. Rates can be stored in a similar way, assume that the rate is 6.56% = 0.0656 this will then be stored as 656 in an int.
  
It will then be possible to do multiplications, subtractions, and additoions without any problems with rounding errors. Note that there can still be rounding errors if division should be involved in the mortgage calculations, it is probably beyond the scope of this exercise to discuss this matter.  
