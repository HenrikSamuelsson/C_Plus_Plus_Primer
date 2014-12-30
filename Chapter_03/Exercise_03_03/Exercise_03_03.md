####Question  
Explain how whitespace characters are handled in the string input operator and in the getline function.  
####Answer  
The string input operator reads and discards any leading whitespace (e.g., spaces, newlines, tabs). It then reads characters until the next whitespace character is encountered.  

The getline function takes an input stream and a string. This function reads the given stream up to and including the first newline and stores what it read, excluding the newline, in its string argument. The reading will stop as soon as as newline is encountered and the function will return.  
