### What is function?

- Function is a block of code performing a unit task
- Function has a name, return type and arguments
- Function is a way to achieve modularization
- Functions are predefined and user defined
- Predefined functions are declared in header files and defined in library files

### Definition, Declaration and Call

<img src="notes/local function declaration.png" width="400">

- Function declaration is also know as function prototype
- Functions need to be declared before use(just like variables)
- Functions can be declared locally or globally
- Return type functionName(argumentList);
- Function definition is a block of code

### Ways to define a function

- Takes nothing, return nothing
- Takes something, return nothing
- Takes nothing, return something
- Takes something, returns something

### Formal and Actual

takes something return something
<img src="notes/formal and actual.png" width="400">

- actual argument: the value that we pass while using function like sum(1, 5)
- formal argument: the value that copied to function definition parameter

### Types of formal arguments

Formal arguments can be of three types

1. Ordinary variable of any type
1. Pointer variable
1. Reference variable

### Call by value, call by address and call by reference

call by value

<img src="notes/call by value.png" width="400">

---

call by address
<img src="notes/call by address.png" width="400">

---

call by reference
<img src="notes/call by reference.png" width="400">

### Benefits of function

- easy to read
- easy to modify
- avoids rewriting of same code
- easy to debug
- better memory utilization

### Function saves memory

- function in a program is to save memory space which becomes appreciable when a function is likely to be called many times

### Function is time consuming

- However every time a function is called (by another function) , it takes lot of extra time in executing a series of instructions for tasks such as jumping to the function, saving registers, pushing arguments into the stack and returning to the calling function

- so when function is small it is worthless to spend so much time in such tasks in cost of saving comparatively small space

### Inline function or (small function)

- To eliminate the cost of calls to small functions, C++ proposes a new feature called inline function
- An inline function is a function that is expanded in line when it is invoked
- Compiler replace the function call with the corresponding code

### Inline is a request

- inline is a request not a command
- the benefit of speed of inline functions reduces as the function grows in size
- so the compiler may ignore the inline function request in some situations.

Few of situations where compiler ignore to turn a function into inline function

- Function containing loop, switch, goto.
- Function with recursion
- Containing static variable

<img src="notes/inline function.png" width="400">

### default arguments

```cpp
#include <iostream>
using namespace std;

int add(int x, int y);

int main()
{
    int a, b;
    cout << "Enter two number" << endl;
    cin >> a >> b;
    cout << "the sum is " << add(a,b);

    return 0;
}

int add(int x, int y){
    return x+y;
}

// output
//    Enter two number
//    4
//    5
//    the sum is 9
```

---

Default argument

```cpp
#include <iostream>
using namespace std;

// default argument in declaration
int add(int = 0, int = 0, int = 0 );

int main()
{
    int a, b;
    cout << "Enter two number" << endl;
    cin >> a >> b;
    cout << "the sum is " << add(a,b);

    int c;
    cout << "Enter three number";
    cin >> a >> b >> c;
    cout << "The sum is " << add(a, b, c);
    return 0;
}

int add(int x, int y, int z){
    return x + y + z;
}

// output
//    Enter two number
//    4
//    5
//    the sum is 9
```

### Function overloading

There are three type in C++ to implement polymorphism

- function overloading (compile time polymorphism)
- operator overloading (compile time polymorphism)
- virtual function (run time polymorphism)

```cpp
#include <iostream>
using namespace std;

// function overloading
// early binding, means binding in compile time

int area(int, int);
float area(int);

int main()
{
    int r;
    cout << "Enter radius of a circle";
    cin >> r;

    float A = area(r);
    cout << "Area of circle is " << A << endl;

    int l, b, a;
    cout << "Enter length and breadth of rectangle";
    cin >> l >> b;
    a = area(l,b);
    cout << "Area of Rectangle is " << a;

    return 0;
}

// area of circle
float area(int R){
    return 3.14 * R * R;
}

// area of rectangle
int area(int L, int B){
    return L * B;
}

// output
//    Enter radius of a circle2
//    Area of circle is 12.56
//    Enter length and breadth of rectangle5
//    6
//    Area of Rectangle is 30
```

### How function overloading is resolved

- first, C++ tries to find an exact match. This is the case where the actual arguments exactly matches the parameter type of one of the overloaded function
- If no exact match is found, C++ tries to find a match through promotion
  - char, unsigned char, and short is promoted to an int
  - float is promoted to double
- if no promotion is found. C++ tries to find a match through standard conversion
