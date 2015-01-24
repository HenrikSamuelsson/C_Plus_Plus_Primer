####Question  
When you use an initializer_list in a range for would you ever use a reference as the loop control variable? If so, why? If not, why not?  
####Answer  
You can never use a plain reference as the loop control variable. This is because all elements in an initializer_list are const so a reference control variable must be qualified by using const.  
