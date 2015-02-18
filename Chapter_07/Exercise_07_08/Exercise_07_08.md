#####Question
Why does read define its Sales_data parameter as plain reference and print define its parameter as a refence to const?
#####Answer
Read defines its Sales_data parameter as a plain reference since it need to write to the argument supplied when calling read. It would not be possible to alter the Sales_data argument if the parameter was a reference to const.  

Print will only read and not alter the data supplied as argument. It is hence valid and benefical to chose a reference to const parameter since this makes to function more flexible in the way that both const and plain type arguments can be used when calling print.  
