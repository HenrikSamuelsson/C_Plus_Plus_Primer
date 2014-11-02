Determine the type and the difference among the following groups of literals. 

**'a', L'a', "a", L"a"**  
All of the above literals reprsents the letter a, but in differents forms.

'a' &nbsp;&nbsp; Character literal, included in the most basic source character set on the system.  

L'a' &nbsp;&nbsp; A wide character literal, type is wchar_t, this type can on some systems represent a greater number of characters than the basic set. 

"a" &nbsp;&nbsp; A string in the most basic source character set. An extra null character will be included at the end of a string literal. 

L"a" &nbsp;&nbsp; An a stored as a string in the form of a wide character literal.  

**10, 10u, 10L, 10ul, 012, 0xC**  
The five first of the above literals represents the decimal number 10 but in different forms. The last literal is 12 in decimal.

10 &nbsp;&nbsp; Signed int representation.

10u &nbsp;&nbsp; Unsigned int representation.

10L &nbsp;&nbsp; Signed long representation.

10ul &nbsp;&nbsp; Unsigned long representation.

012 &nbsp;&nbsp; Signed int representation, written in octal form.

0xC &nbsp;&nbsp; Signed int representation, written in hexadecimal form.

**3.14, 3.14f, 3.14L**  
The above literals all hold (approximaly) the value 3.14 but it will possibly be stored in different ways in memory.  

3.14 &nbsp;&nbsp; Will be stored as a double.  

3.14f &nbsp;&nbsp; Will be stored as a float, meaning that i might use less memory to be stored than the double version, but will also be less precise.  

3.14L &nbsp;&nbsp; Will be stored as a long double.

**10, 10u, 10., 10e-2**  
The three first literals hold the value 10. The last holdes the value 0.1.  

10 &nbsp;&nbsp; This is a signed int.  

10u &nbsp;&nbsp; This is a unsigned int.  

10. &nbsp;&nbsp; This is a double.  

10e-2 &nbsp;&nbsp; This is a double written in exponential representation.
