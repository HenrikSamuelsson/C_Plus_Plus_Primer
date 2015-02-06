Definitions  
===========  
Collection of terms, listed alphabetically, related to the C++ programming language.  
A  
-  
**abstract data type** Model for a certain class of data structures that have similar behavior. An abstract data type is defined only by the operations that may be performed on it.  
**address** Refers to a memory location.  
**address of operator** Written as "&". Used for getting the address in the memory of an object.  
**alias declaration** Setups another name for a type by the aid of the using keyword.  
**array** Data structure that hold a contiguous sequence of elements which are accessed by an index.  
**argument** Value passed to a function in the code. Can also be a value passed from the command line to the main function.  
**arithmetic types** A type that is built into the c++ language itself. Some common examples are bool, char, int, and double.   
**assignment** Set or re-set the value stored in the storage location denoted by a variable name.  
**assignment operator** Written as "=". Used for assignment.  
**auto** Keyword indicating that a variables type shall be automatically deduced from its initializer. Primarily useful in generic programming.  
B  
-  
**base class** The parent class of a derived class. Classes may be used to create other classes. A class that is used to create another new class is called the base class.  
**base type** Type specifier that precedes the declarators in a declaration. Take for example a reference declaration to an int "int &r = i;". The base type is an int in this example and then follows a reference declarator.  
**begin** Member of string and vector that returns an iterator pointing to the first element in the sequence. May also refer to the related library function that takes a pointer to an array and returns the first element in the array.  
**bind** Coupling of a new additional name to a given entity.  
**bit** The basic unit of information in computing. A bit can have only one of two values, commonly represented as 0 and 1.  
**block** Statements gated by curly braces.  
**block scope** A scope defined by a block gated by curly braces.  
**buffer** Region used to store data temporarily. Note that streams are often buffered and this may lead to unexpected behavour in some situtations.  
**buffer overflow** A serious bug where a program, while writing data to a buffer, overruns the buffer's boundary and overwrites adjacent memory.   
**bug** Colloquial term for error.  
**built-in type** Type defined by the language itself, common examples are bool, char, int, double.  
**byte** The smallest unit of memory that can be directly addressed. A byte will usually hold 8 bits of data.  
C
-  
**C** A programming language designed by Dennis Ritchie between 1969 and 1973. C++ is based on C and maintains a high degree of compatibility with C.
**c-style string** Null-terminated character array. Included in the c++ language mostly for backwards compatibility with c. 
**call operator** Written as "()". Executes a function.  
**capture list** Part of a lambda expression that specifies if and how one or more variables can be used by the lambda.  
**cerr** Standard output stream for errors. Will often have the same destination as cout.  
**character string literal** Term sometimes used as synonym for string literal.  
**cin** Object of class type istream, used for reading data, in form of characters, from the standard input.  
**class** Fundamental feature used for creation of user defined types.  
**class derivation list** A list that holds information about what base classes a certain class is derived from.  
**class member** Part of a class. Can either be data or function declarations.  
**class template** An abstract blueprint from which specific class types can be constructed. Defines the behavior of the class without actually knowing what datatype will be handled by the class. Exact type is decided when the class shall be used by providing additional information.  
**class type** Defined using class specifiers. The definiton starts with the class, struct or union keyword, other parts are the class name and class member declarations.  
**clog** Standard output stream for logging. Can for example report events in the program execution to a log file.  
**comment** Code that is ignored by the compiler. Written for the developers by the developers to document and clarify the code.  
**compiler** A computer program that transforms source code written in a programming language, such as for example C++, into another computer language that will often have a binary form known as object code. The most common reason for using a compiler is to transform source code into an executable program.  
**compiler extension** Extensions to the C++ language provided by the specific compiler used to build the program. Can be helpful but causes problems if it is decided that the development environment shall be changed at a later point in time.  
**compound assignment operator** Written as "+=". Will add the right-hand operand to the left-hand operand and store the result in the left-hand operand.  
**compound type** Type that is constructed from fundamental types. Can be array, function, object pointer, function pointer, member object pointer, member function pointer, reference, class, union, or enumeration, including any cv-qualified variants.   
**container** A holder object that stores a collection of other objects.   
**condition** Expression that will be evaluted during program execution to either true or false.  
**const** Type qualifier used to specify that the object or variable is not modifiable.  
**const pointer** Pointer that points to a const object. Is also sometimes used to describe pointers that hold a constant memory address.   
**const reference** Colloquial synonym for reference to const.  
**constant expression** An expression that can be evaluated at compile time.  
**constexpr** Specifier used to declare that it is possible to evaluate the value of the function or variable at compile time.  
**conversion** Transforming a value of one type into a, more or less equivalent, value of another type.  
**cout** Object of class type ostream, used for writing data to an output.  
**curly brace** Symbol that comes i two different shapes, the open curly ({), and the close curly (}). Used to indicate where a block starts and ends in the code.  
D  
-  
**data member** Content in a class used for storing data. Every object of an class holds it's own copies of this data.  
**data structure** Data elements grouped together under one name.  
**declaration** Introduces or re-introduces the existance of a name or prorgram element into a program, will typically refer to a variable.  
**declarator** Thu sub-part of an declaration that contains the name and possibly type modifiers.    
**decltype** A keyword used to query the type of an expression. Comes in handy in generic programming where it can be difficult to deduct the type of an expression.  
**decrement operator** Written as "--". Subtracts 1 from the operand.  
**default initialazation** Sets objects to default values, if not explicitly initialized. Values are class dependant for class type objects. Built-in types are default initialized to 0 if and only if defined in the global scope.  
**definition** A declaration that specifies the entity to which the declared name refers. A definition of a variable will include the type of the varibale. Enough memory is then allocated for storing of the variable.  
**dereference operator** Written as an asterisk placed before a pointer to an object. Used for getting the value of the object pointed to by the pointer. Can also be used to assign a value to the object pointed to by the pointer.  
**derived class** Class that inherits from another class. The derived class can, in C++, be made to have altered behavior by ovveride of the virtuals of its base. New functionality can be added by define of new members.  
**dot operator** Written as ".". Used to reference individual members of classes, structures, and unions. The dot operator is applied to the actual object.  
E  
- 
**edit-compile-debug** Summary descripton of the steps used in the software implementation process.  
**ellipsis** Special notation formed by writing three dots (...). Used to indicate that a function takes an unspecified number of parameters.  
**encapsulation** An object oriented programming concept that binds together the data and functions that manipulate the data, and that keeps both safe from outside interference and misuse.  
**end-of-file** Special marker indicating that there is no more data left to read in a file, the exact representation is system defined.  
**EOF** Abbreviaton for end-of-file.  
**equality operator** Written as "==". Takes two operands, evaluates to true if both operands are equal, and false if this is not the case.  
**escape character** The backslash character "\". Indicates the start of an escape sequence.   
**escape sequence** Sequence of characters that represent a single character, will always start with the escape character. Typically used to be able to represent non printable characters.  
**expression** A combination of one ore more operands and usually one ore more operators. The evaluation results in a value.  
F  
-  
**for statement** Provides a mechanism that allows code to be executed repeatedly.  
**forward declaration** Declartion of an identifier that have not yet been given a complete definition.  
**function** Named sequence of statements that can be invoked with given arguments and might return a value.  
**function body** Block of code that defines a given function.  
**function name** Name that is used to identify and call a given function.  
**functor** Class that acts like a function by overloading the function call operator.  
G  
-  
**generic algorithm** Type-indepent, finite step by step procedure.  
**generic programming** A style of programming in which algorithms are written in terms of types to-be-specified-later that are then instantiated when needed for specific types provided as parameters.  
**global scope** The outermost scope, used to define global variables or other global constructs, that shall be valid and visible at all times.  
**greater-than operater** Written as ">". Takes two operands and returns true if the left-hand operand is greater than the right-hand operand.  
**greater-than-or-equal operator** Written as ">=". Takes two operands and returns true if the left-hand operand is greater than or equal compared to the right-hand operand.  
H  
-  
**header** Section at the top of file with include directives. A convinient way to make it possible to use definitons from other files.  
**header guard** Preprocessor construct used to avoid the problem of double inclusion when dealing with the include directive.  
I  
-  
**identifier** Sequence of character used to denote objects, variables, structures, functions, and other elements to be named in the code that make up C++ programs.  
**if statement** Mechanism that makes it possible to choose if a certain block of code shall be run or not, depending on a run time condition.  
**in-class initializer** Initalization of a class data member when it is declared.  
**in scope** Identifier that is visible, at a given place in the code, and can hence be used.  
**include directive** Written as "#include". This provides a mechanism for textual inclusion of one source file into another.  
**incomplete type** Type that at a given time have been declared but lacks a definiton.  
**increment operator** Written as "++". Adds 1 to the operand.  
**inequality operator** Written as "!=". Takes two operands, evaluates to false if both operands are equal, and false if this is not the case.  
**inheritance** Basing a new object or a class on an existing object or class. A mechanism for code reuse that at the same time allows extensions of the original classes if needed.  
**initialization** Giving an object an initial value at the time of definition.  
**inline function** A function qualified with the keyword inline. Suggests to the compiler that it should substitute the function call with the body of the function inline. This saves on the overhead caused by function calls but requires more memory to store the code.  
**inner scope** A scope nested inside of another scope.  
**input operator** Written as ">>" Reads from an input specified in the left-hand operand and the data is stored in the right-hand operand.  
**integral type** A type which represents some finite subset of the mathematical integers.  
**iostream** Header that defines the standard input/output stream objects.  
**istream** Input stream objects that read and interpret input from sequences of characters.  
L  
-  
**lambda expression** A lambda is a programming technique that is related to anonymous functions. A lambda implicitly defines a function object class and constructs a function object of that class type.  
**less-than operator** Written as "<". Takes two operands and returns true if the left-hand operand is less than the right-hand operand.  
**less-than-or-equal operator** Written as "<=". Takes two operands and returns true if the left-hand operand is less than or equal compared to the right-hand operand.  
**library type** Type defined by the C++ Standard Library.  
**list initialization** Initialization of an object by the use of a braced-init-list.  
**literal** Constant value included directly in the code. Can be of various tyes such as, a number like 42, a string like "Hello world", a character like 'c'.  
**local scope** Colloquial synonym for block scope.  
**low-level const** A const that is not top-level. Such consts are integral to the type and are never ignored.  
M
-  
**main** Function called by the system when starting to execute a C++ program.  
**manipulator** Functions specifically designed to be used in conjunction with the insertion (<<) and extraction (>>) operators on stream objects. One example of such a function is std::endl.  
**member** Type, variable, constant, or function declared in a class.  
**member function** Function declared in the scope of a class. Usually called to operate on a specific object.  
**method** Synonym for (virtual) member function.  
N  
-  
**namespace** Defines a named scope. Makes it possible to differentiate classes, variables, functions etc from different libraries that could happen to have the same name.  
**nonprintable character** A number representing white space characters; space, tab, new line or other special control characters such as for example; escape, delete, bell code.  
**null pointer** A pointer that currently do not point at anything.  
**nullptr** A keyword that denotes the null pointer literal.  
O  
-  
**object** This term has different meanings depending on the context. Will often refer to an instance of a class but can also be used more losely when refering to a variable or just a value of some type in a contingious region of the memory.  
**object-oriented programming** Programming language model organized around objects rather than actions and data rather than logic.  
**ostream** A type in the std library that can be used to write characters sequences or representations of other kinds of data.  
**outer scope** Refers to a scope that encloses another scope.  
**output operator** Written as "<<". Left-hand operand shall be a stream that will be written to. The right-hand operand hold the data that will be written.  
P  
-  
**parameter** A variable whitin a function declaration. Indicates what type of data to be used as an argument when the function is called.  
**parameter list** Specifies the number of arguments, and corresponding type, to be used when calling a given function.  
**pointer** An object that holds an address or 0.  
**pointer to const** A pointer that can be used to point at a const object.  
**preprocessor** A program that is executed before the compilation. The result of preprocessing is a single file which is then passed to the actual compiler.  
**prepcocessor variable** Variable defined by a preproccesor directive with an identifier and a value. When the preprocessor encounters this directive, it replaces any occurrence of identifier in the rest of the code by replacement to the corresponding value.  
R  
-  
**reference** A reference datatype that is less powerful but safer than the pointer. Can be implemented as a new name for an existing object.  
**reference to const** A less powerful version of an ordinary reference since it can not change the value of the object to which it refers. Needed to be able to have a reference to a const object.   
**return type** The type of the value returned by a function, specified in the definition of the function.   
S  
-  
**scope** Names can be used only in certain regions of a program. This area is called the "scope" of the name. Scope determines the "lifetime" of a name.   
**scope operator**  The scope operator helps to identify and specify the context to which an identifier refers. In C++ the scope operator is written "::".  
**separate compilation** Support for separation of the source files into different modules that can be compiled one by one and then pieced together into an executable program. This feature simplifies the development phase.  
**signed** Integer type that can be used for storing both positive and negative values.  
**source file** File that contains human readable code for a C++ program.  
**standard error stream** Output used for error reporting. The destination is often shared with cout.  
**standard input stream** The default source of data for applications. In most systems directed by default to the keyboard.  
**standard library** Collection of classes and functions that every compiler must support. Examples of content are several generic containers, functions to utilize and manipulate these containers, generic strings and streams, and everyday functions for tasks such as finding the square root of a number.  
**standard output stream** Default destination of output for applications. In most systems directed by default to a text console.  
**statement** The basic unit controlling the execution flow of a program. A simple type of statment is an expression followed by a semicolon. Other types of statments are the if-statement, while-statement, do-statement, switch-statement, and the block.  
**std** Name of the namespace used by the standard library.  
**string** A class in the standard library intended for representing strings of text.  
**string literal** A sequence of characters placed between double quotes.  
**struct** Keyword used to setup a structure holding a group of data elements grouped together under one name.  
T  
-  
**temporary** Anonymous object automatically created while evaluating an expression. Exist until the entire expression, that the temporary is part of, have been evaluated.  
**template** Feature that supports generic types in functions and classes. Allows a function or class to work on many different data types without being rewritten for each one.  
**top-level const** The const that for example can be used to specify that a pointer is const, as opposed to the low-level const that is used to specify that the object that the pointer points at is const.  
**trailing return type** Function declaration syntax that ends with an arrow (->) and then finally the return type. Added to the language to support some special template cases but can also be used for more mundane function declarations.  
**type alias** A type alias is a different name by which a type can be identified. In C++, any valid type can be aliased so that it can be referred to with a different identifier.  
**type checking** The process of verifying and enforcing the constraints of types. This is done by the compiler in C++.  
**type qualifier** Keywords that provide additional information about the variables they precede. The possible type qualifiers in C++ are const, volatile, and restrict.  
**type specifier** Indicates the type of the object or function being declared. Some common type specifiers are class-specifier, const, and volatile. Note that just the simple name of an object is also included in the set of type specifiers.  
**typedef** Keyword used for writing a typedef declaration that creates an alias that can be used anywhere in place of a (possibly complex) type name.  
U
-  
**undefined** Describes a situation when it is not known what will happen when the code runs because it is not specified by the C++ specification.   
**uninitialized variable** Variable that is not given an initial value. Can for example be a variable of one of the built-in types defined inside a function, the values of these variables is undefined, this can cause nasty bugs.  
**unsigned** A keyword that is used as type specifier for integer types. Indicates that the type only holds values greater than or equal to zero.  
V  
-  
**variable** Named object in a scope.  
**void pointer** Pointer that can point to any type.  
W
-  
**while statment** Provides a mechanism that allows code to be executed repeatedly.  
**word** The natural unit of data used by a particular processor design. The word size is the preferred size for moving units of information around. The size of a word is often mesarued in bits.
