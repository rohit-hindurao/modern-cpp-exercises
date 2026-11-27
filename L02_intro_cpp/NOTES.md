A variable = name + type + value, stored in memory. The type is fixed at compile time (unlike Python).

All character, integer and floating point types are arithmetic.
Arithmetic operations: +, -, *, /
Comparison: <, >, <=, >=, ==, != (return bool)
a += 1 is the same as a = a + 1, same goes for -=, *=, /=
Avoid == for floating point types (use a small tolerance instead)

Additional operations:
OR: ||, AND: &&, NOT: !
/ is integer division only when both sides are ints: 7 / 2 = 3, but 7.0 / 2 = 3.5
% is modulo (remainder), works only on ints: 7 % 2 = 1
Increment operator: a++ or ++a or a += 1
Decrement operator: a-- or --a or a -= 1

Strings are used to represent an array of characters. Check greet.cpp for strings.
std::string can be concatenated using '+'.
But "hello" + "world" (two plain literals) won't compile. At least one side must be a std::string.

Arrays: store a collection of items of the same type.
#include <array> is used for std::array
Whenever we define an array we need to specify its size, like in array.cpp we used array<float, 3>: 3 is the size of the array and float is the data type it holds.
Size is fixed at compile time and can't change.
Indexing in arrays starts at 0.

Vectors: vectors are used the same way as arrays, but they don't have a fixed size, so they can grow and shrink when elements are added or removed. We can add as many elements as we want as long as memory can hold them.
#include <vector> is used for std::vector
Vectors are implemented as a dynamic table, i.e. a list of items that automatically grows or shrinks in memory as you add or remove elements.
Access stored items just like in std::array.
A new item can be added in one of two ways:
a. vec.emplace_back(value): builds the item directly inside the vector
b. vec.push_back(value): copies/moves an existing item into the vector
For int and double both are the same.

When a vector is full and we add more, it usually doubles its capacity (1, 2, 4, 8, 16...). Each time it grows, it allocates new memory and moves every element there. Many push_back or emplace_back operations can force this to happen many times, which slows the program down.
The fix is simple: call reserve(n), which sets aside memory for n items in advance. n can be an approximate estimate. Check vectors.cpp: we estimated we might need 100 elements, so we reserved memory for 100 and there won't be any sudden expansion.
reserve(n) only reserves memory, it doesn't add items: size() = items stored, capacity() = space reserved.
After vec.reserve(100), vec.size() is still 0.

Careful: vec.push_back(3.0) into std::vector<int> silently converts 3.0 to 3 (3.7 would also become 3).
Compile with -Wall -Wextra -Wconversion to get a warning for this.