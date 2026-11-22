C++ prograns are developed in stages first define the problem. once defined then decide how you are going to solve it. now write the program for it.

once the code is written. now to compile it we use the command "g++ -o {exename} {file_name.cpp}" and to run and see the output we use "./{exename}". In future we try to use "g++ -Wall -Wextra -o {exename} {file_name.cpp}" for warning checks.

c++ tells you the standard in use:

201703 = C++17 | 202002 = C++20 | 202302 = C++23

My setup: g++ 13 on Ubuntu 24.04 → C++17 by default.

comments are added in the program using "//" symbol. comments make the program more readable and the compiler ignores the comments when compiling the code. Multi line comments can be created using  "/*" at start and end of the comment. A proper use of comments is 
"// This program calculates the student's final grade based on their test and homework scores."

An object is used to store a value in memory. A variable is an object that has a name (identifier). Naming our objects let us refer to those objects again later in the program. It can be created by data_type followed by the name of variable.
an example of creating and assigning variables :
int a;         // default-initialization (no initializer)

// Traditional initialization forms:
int b = 5;     // copy-initialization (initial value after equals sign)
int c ( 6 );   // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred):
int d { 7 };   // direct-list-initialization (initial value in braces)
int e {};      // value-initialization (empty braces)

C++17 introduced the [[maybe_unused]] attribute, which allows us to tell the compiler that we’re okay with a variable being unused. The compiler will not generate unused variable warnings for such variables.

If we want to print separate lines of output to the console, we need to tell the console to move the cursor to the next line. We can do that by outputting a newline. One way to output a newline is to output std::endl. But we prefer using "/n".

std::cin (which stands for “character input”) reads input from keyboard. We typically use the extraction operator >> to put the input data in a variable

The syntax of the language requires that some elements are separated by whitespace. This mostly occurs when two keywords or identifiers must be placed consecutively, so the compiler can tell them apart.

Literals and variables both have a value (and a type). Unlike a variable (whose value can be set and changed through initialization and assignment respectively), the value of a literal is fixed and cannot be changed. 