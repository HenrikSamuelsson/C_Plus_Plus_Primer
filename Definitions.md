Definitions  
===========  
Collection of terms, listed alphabetically, related to the C++ programming language.  
A  
-  
**abstract data type** Model for a certain class of data structures that have similar behavior. An abstract data type is defined only by the operations that may be performed on it.  
**address** Refers to a memory location.  
**alias declaration** Setups another name for a type by the aid of the using keyword.  
**array** Data structure that hold a contiguous sequence of elements which are accessed by an index.  
**argument** Value passed to a function in the code. Can also be a value passed from the command line to the main function.  
**arithmetic types** A type that is built into the c++ language itself. Some common examples are bool, char, int, and double.   
**assignment** Set or re-set the value stored in the storage location denoted by a variable name.  
**assignment operator** Written as "=". Used for assignment.  
**auto** Keyword indicating that a variables type shall be automatically deduced from its initializer. Primarily useful in generic programming.  
B  
-  
**base type** Type specifier that precedes the declarators in a declaration. Take for example a pointer declaration to an integer `int *p;`. The base type is an int in this example and then follows a pointer declarator.  
**bind** Coupling of a new additional name to a given entity.  
**bit** The basic unit of information in computing. A bit can have only one of two values, commonly represented as 0 and 1.  
**block** Statements gated by curly braces.  
**buffer** Region used to store data temporarily. Note that streams are often buffered and this may lead to unexpected behavour in some situtations.  
**built-in type** Type defined by the language itself, common examples are bool, char, int, double.  
**byte** The smallest unit of memory that can be directly addressed. A byte will usually hold 8 bits of data.  
C
-  
**call operator** Written as "()". Executes a function.  
**capture list** Part of a lambda expression that specifies if and how one or more variables can be used by the lambda.  
**cerr** Standard output stream for errors. Will often have the same destination as cout.  
**character string literal** Term sometimes used as synonym for string literal.  
**cin** Object of class type istream, used for reading data, in form of characters, from the standard input.  
**class** Fundamental feature used for creation of user defined types.  
**class member** Part of a class. Can either be data or function declarations.  
**class type** Defined using class specifiers. The definiton starts with the class, struct or union keyword, other parts are the class name and class member declarations.  
**clog** Standard output stream for logging. Can for example report events in the program execution to a log file.  
**comment** Code that is ignored by the compiler. Written for the developers by the developers to document and clarify the code.  
**compound assignment operator** Written as "+=". Will add the right-hand operand to the left-hand operand and store the result in the left-hand operand.  
**compound type** Type that is constructed from fundamental types. Can be array, function, object pointer, function pointer, member object pointer, member function pointer, reference, class, union, or enumeration, including any cv-qualified variants.   
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
**dot operator** Written as ".". Used to reference individual members of classes, structures, and unions. The dot operator is applied to the actual object.  
E  
- 
**edit-compile-debug** Summary descripton of the steps used in the software implementation process.  
**ellipsis** Special notation formed by writing three dots (...). Used to indicate that a function takes an unspecified number of parameters.  
**encapsulation** An object oriented programming concept that binds together the data and functions that manipulate the data, and that keeps both safe from outside interference and misuse.  
**end-of-file** Special marker indicating that there is no more data left to read in a file, the exact representation is system defined.  
**EOF** Abbreviaton for end-of-file.  
**equality operator** Written as "==". Takes two operands, evaluates to true if both operands are equal, and false if this is not the case.  
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
I  
-  
**if statement** Mechanism that makes it possible to choose if a certain block of code shall be run or not, depending on a run time condition.  
**in-class initializer** Initalization of a class data member when it is declared.  
**include directive** Written as "#include". This provides a mechanism for textual inclusion of one source file into another.  
**incomplete type** Type that at a given time have been declared but lacks a definiton.  
**increment operator** Written as "++". Adds 1 to the operand.  
**inequality operator** Written as "!=". Takes two operands, evaluates to false if both operands are equal, and false if this is not the case.  
**initialization** Giving an object an initial value at the time of creation.  
**inline function** A function qualified with the keyword inline. Suggests to the compiler that it should substitute the function call with the body of the function inline. This saves on the overhead caused by function calls but requires more memory to store the code.  
**input operator** Written as ">>" Reads from an input specified in the left-hand operand and the data is stored in the right-hand operand.  
**iostream** Header that defines the standard input/output stream objects.  
**istream** Input stream objects that read and interpret input from sequences of characters.  
L  
-  
**lambda expression** A lambda is a programming technique that is related to anonymous functions. A lambda implicitly defines a function object class and constructs a function object of that class type.  
**less-than operator** Written as "<". Takes two operands and returns true if the left-hand operand is less than the right-hand operand.  
**less-than-or-equal operator** Written as "<=". Takes two operands and returns true if the left-hand operand is less than or equal compared to the right-hand operand.  
**library type** Type defined by the C++ Standard Library.  
M
-  
**main** Function called by the system when starting to execute a C++ program.  
**manipulator** Functions specifically designed to be used in conjunction with the insertion (<<) and extraction (>>) operators on stream objects. One example of such a function is std::endl.  
**member function** Function declared in the scope of a class. Usually called to operate on a specific object.  
**method** Synonym for (virtual) member function.  
N  
-  
**namespace** Defines a named scope. Makes it possible to differentiate classes, variables, functions etc from different libraries that could happen to have the same name.  
**null pointer** A pointer that currently do not point at anything.  
O  
-  
**object** This term has different meanings depending on the context. Will often refer to an instance of a class but can also be used more losely when refering to a variable or just a value of some type in a contingious region of the memory.  
**ostream** A type in the std library that can be used to write characters sequences or representations of other kinds of data.  
**output operator** Written as "<<". Left-hand operand shall be a stream that will be written to. The right-hand operand hold the data that will be written.  
P  
-  
**parameter** A variable whitin a function declaration. Indicates what type of data to be used as an argument when the function is called.  
**parameter list** Specifies the number of arguments, and corresponding type, to be used when calling a given function.  
**pointer** An object that holds an address or 0.  
R  
-  
**return type** The type of the value returned by a function, specified in the definition of the function.   
S  
-  
**scope operator**  The scope operator helps to identify and specify the context to which an identifier refers. In C++ the scope operator is written "::".  
**separate compilation** Support for separation of the source files into different modules that can be compiled one by one and then pieced together into an executable program. This feature simplifies the development phase.  
**source file** File that contains human readable code for a C++ program.  
**standard error stream** Output used for error reporting. The destination is often shared with cout.  
**standard input stream** The default source of data for applications. In most systems directed by default to the keyboard.  
**standard library** Collection of classes and functions that every compiler must support. Examples of content are several generic containers, functions to utilize and manipulate these containers, generic strings and streams, and everyday functions for tasks such as finding the square root of a number.  
**standard output stream** Default destination of output for applications. In most systems directed by default to a text console.  
**statement** The basic unit controlling the execution flow of a program. A simple type of statment is an expression followed by a semicolon. Other types of statments are the if-statement, while-statement, do-statement, switch-statement, and the block.  
**std** Name of the namespace used by the standard library.  
**string literal** A number of characters placed between double quotes.  
T  
-  
**template** Feature that supports generic types in functions and classes. Allows a function or class to work on many different data types without being rewritten for each one.  
**trailing return type** Function declaration syntax that ends with an arrow (->) and then finally the return type. Added to the language to support some special template cases but can also be used for more mundane function declarations.  
**type qualifier** Keywords that provide additional information about the variables they precede. The possible type qualifiers in C++ are const, volatile, and restrict.  
U
-  
**uninitialized variable** Variable that is not given an initial value. Can for example be a variable of one of the built-in types defined inside a function, the values of these variables is undefined, this can cause nasty bugs.  
**unsigned** A keyword that is used as type specifier for integer types. Indicates that the type only holds values greater than or equal to zero.  
V  
-  
**variable** Named object in a scope.  
W
-  
**while statment** Provides a mechanism that allows code to be executed repeatedly.  
**word** The natural unit of data used by a particular processor design. The word size is the preferred size for moving units of information around. The size of a word is often mesarued in bits.
