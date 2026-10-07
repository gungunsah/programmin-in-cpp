C++ Programming Concepts

A complete, topic-wise collection of C++ concepts with theory and well-commented example programs. It covers everything from the basics to advanced and modern C++,
and is meant for learning, quick revision, and interview preparation.

Table of Contents
About C++
Topics Covered
1. Basics
2. Control Flow
3. Functions
4. Arrays and Strings
5. Pointers and References
6. Object-Oriented Programming
Getting Started
How to Compile and Run
Author
About C++
C++ is a compiled, statically typed, general-purpose programming language created by Bjarne Stroustrup at Bell Labs in 1979 (originally called "C with Classes")
 and renamed C++ in 1983. It extends the C language with object-oriented, generic, and functional features while keeping low-level control over memory and hardware.

Key features

Feature	Description
Compiled	Source code is converted to machine code by a compiler, so programs run fast
Statically typed	Types are checked at compile time, which catches many errors early
Multi-paradigm	Supports procedural, object-oriented, generic, and functional styles
Low-level control	Direct memory access through pointers and manual memory management
Rich library	Standard Template Library (STL) provides ready-made data structures and algorithms
Portable	Standardized by ISO (C++98, 03, 11, 14, 17, 20, 23) and available on all major platforms

How a C++ program runs

Source code (.cpp) → Preprocessor → Compiler → Assembler → Linker → Executable
Preprocessor handles directives like #include and #define.
Compiler translates the code into assembly/object code.
Linker combines object files and libraries into one executable.
Topics Covered
1. Basics
Structure of a C++ program
Every C++ program starts executing from the main() function. Header files provide declarations of library functions and objects.

cpp
#include <iostream>      // header file for input/output
using namespace std;     // use the std namespace

int main() {
    cout << "Hello, C++!" << endl;
    return 0;            // 0 means successful execution
}

Variables and data types
A variable is a named memory location. Its data type decides how much memory it takes and what values it can hold.
Type	Typical size	Example
int	4 bytes	int age = 20;
float	4 bytes	float pi = 3.14f;
double	8 bytes	double x = 2.718281;
char	1 byte	char grade = 'A';
bool	1 byte	bool flag = true;
void	none	used for functions that return nothing
Type modifiers: short, long, signed, unsigned. Sizes depend on the compiler and system, so use sizeof() to check.

Constants
Values that cannot change after initialization: const int MAX = 100; or #define MAX 100. Prefer const or constexpr because they are type-safe.

Input and output
cout prints to the screen using the insertion operator <<. cin reads from the keyboard using the extraction operator >>. Use getline(cin, str) to read a full line including spaces.

Operators
Arithmetic: + - * / %
Relational: == != < > <= >=
Logical: && || !
Bitwise: & | ^ ~ << >>
Assignment: = += -= *= /= %=
Increment/decrement: ++ and -- (prefix and postfix forms)
Ternary: condition ? a : b

Type casting
Converting one type to another. Implicit casting is done by the compiler, explicit casting by the programmer: static_cast<int>(3.7), dynamic_cast, const_cast, reinterpret_cast.

2. Control Flow
Control flow statements decide the order in which code executes.

Decision making
cpp
if (marks >= 90) {
    cout << "A";
} else if (marks >= 75) {
    cout << "B";
} else {
    cout << "C";
}

switch is used when one variable is compared against many constant values. Each case normally ends with break, otherwise execution falls through to the next case.
Loops
Loop	When to use
for	number of iterations is known
while	condition is checked before each iteration
do-while	body must run at least once

Jump statements
break exits the nearest loop or switch.
continue skips the rest of the current iteration.
goto jumps to a label (rarely recommended).
return exits the function.

3. Functions
A function is a reusable block of code that performs a specific task. Functions reduce repetition and make programs modular.
cpp
int add(int a, int b) {     // definition
    return a + b;
}

Declaration vs definition: A declaration (prototype) tells the compiler the function name, return type, and parameters. The definition provides the body.
Parameter passing
Method	Behavior
Pass by value	A copy is passed; changes do not affect the original
Pass by reference	void f(int &x) works on the original variable
Pass by pointer	void f(int *x) the address is passed

Other concepts
Default arguments: void greet(string name = "Guest");
Function overloading: same name, different parameter lists. Resolved at compile time.
Inline functions: inline suggests that the compiler replace the call with the function body to avoid call overhead.
Recursion: a function calling itself. It needs a base case to stop and a recursive case that moves toward it.
cpp
int factorial(int n) {
    if (n <= 1) return 1;          // base case
    return n * factorial(n - 1);   // recursive case
}
4. Arrays and Strings
Arrays
An array stores multiple elements of the same type in contiguous memory. Indexing starts at 0 and C++ does not check bounds, so accessing outside the array
is undefined behavior.

cpp
int arr[5] = {1, 2, 3, 4, 5};
int matrix[3][3];     // 2D array

The array name acts like a pointer to its first element, so arr[i] is the same as *(arr + i).
C-style strings
Character arrays that end with the null character '\0'. Functions like strlen, strcpy, strcmp, and strcat come from <cstring>.
std::string
A safer and easier class from <string>. Common methods: length(), size(), substr(), find(), append(), insert(), erase(), compare(), push_back(), pop_back().

5. Pointers and References
Pointers
A pointer is a variable that stores the memory address of another variable.

cpp
int x = 10;
int *p = &x;      // p holds the address of x
cout << *p;       // dereferencing: prints 10
& is the address-of operator, * is the dereference operator.
Pointer arithmetic: p + 1 moves by sizeof(int) bytes, not by 1 byte.
Null pointer: use nullptr for a pointer that points to nothing.
Dangling pointer: points to memory that was already freed.
Wild pointer: an uninitialized pointer.

References
A reference is an alias (another name) for an existing variable: int &r = x;. It must be initialized when declared and cannot be changed to refer to something else later.

Pointer	Reference
Can be null	Cannot be null
Can be reassigned	Cannot be reseated
Needs * to access value	Used like a normal variable

Dynamic memory allocation
Memory on the heap is allocated at runtime.

cpp
int *p = new int(5);          // single value
int *arr = new int[10];       // array
delete p;                     // free single value
delete[] arr;                 // free array

Forgetting to delete causes a memory leak.

Smart pointers (from <memory>, C++11)

Type	Meaning
unique_ptr	Exclusive ownership; cannot be copied, only moved
shared_ptr	Shared ownership using reference counting
weak_ptr	Non-owning reference that avoids circular references

They free memory automatically (RAII), so prefer them over raw new/delete.

6. Object-Oriented Programming (OOP)
OOP organizes code around objects that combine data and the functions working on that data.

Classes and objects
A class is a blueprint, and an object is an instance of that class.

cpp
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}   // constructor
    void display() { cout << name << " " << age; }
};

Student s1("Aman", 20);

Access specifiers: private (only inside the class), protected (class and derived classes), public (everywhere).

Constructors and destructors

Constructor: runs automatically when an object is created. Types: default, parameterized, copy.
Destructor: ~ClassName() runs when the object is destroyed and is used to release resources.
Rule of Three/Five: if a class manages resources, define the destructor, copy constructor, copy assignment (and move constructor/move assignment in C++11).

this pointer: points to the current object inside member functions.

Static members: shared by all objects of the class. A static member function can only access static data.

Friend function/class: can access private and protected members of a class without being a member of it.

The four pillars of OOP

Encapsulation: bundling data and methods together and restricting direct access using private members and getters/setters.
Abstraction: showing only essential details and hiding implementation (abstract classes, interfaces).
Inheritance: a derived class reuses the properties of a base class.
Types: single, multiple, multilevel, hierarchical, hybrid.
The diamond problem in multiple inheritance is solved using virtual inheritance.
Polymorphism: "many forms".
Compile-time: function overloading and operator overloading.
Run-time: virtual functions and function overriding, resolved using the vtable.
cpp
class Shape {
public:
    virtual void draw() { cout << "Shape"; }
    virtual ~Shape() {}                    // virtual destructor
};
class Circle : public Shape {
public:
    void draw() override { cout << "Circle"; }
};

Abstract class: a class with at least one pure virtual function (virtual void f() = 0;). It cannot be instantiated.

Operator overloading: gives special meaning to operators for user-defined types, such as + for a Complex class. The operators ::, ., .*, ?: and sizeof cannot be overloaded.
