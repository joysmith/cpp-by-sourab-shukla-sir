---

## Identifier

#### Constants

- any information is constant
- every software manage information
- data = information(name, song, photo, numbers) = constant
- types of constant

<img src="notes/type of constant.png" width="400">

- secondary constant are made with the help of primary constant

<img src="notes/in memory.png" width="400">

#### variables

- variables are the names of memory locations where we store data
- variable name is any combinations of alphabet (a-z or A-Z), digit(0-9) and underscore(\_)
- valid variable name cannot start with digit

### Keywords or predefine words or reserved words

<img src="notes/keywords.png" width="400">

---

## Identifier Data types

- int: integer
- char: character
- float: real
- double: real
- void

<img src="notes/data types.png" width="400">

<img src="notes/declare variable.png" width="400">

---

## Input output in C++

#### Output instruction

- In C, standard output device is monitor and printf() is use to send data/message to monitor
- printf() is a predefine function
- In C++, we can use cout to send data/message to monitor
- cout is an object, character out
- cout is predefine object
- The "<<" operator is called string insertion or put to operator

<img src="notes/output instruction.png" width="400">

#### Input instrucction

- In C, standard input is keyboard and scanf() is use to receive data from keyboard
- scanf() is a predefined function
- In C++, we can use cin to input data from keyboard
- The identifier cin is a predefine object in C++
- The ">>" operator is know as string extraction or get from operator

<img src="notes/input instruction.png" width="400">

#### About iostream.h

- According to ANSI standards for C language, explicit declaration of function is recommended but not mandatory
- ANSI standards for C++ language says explicit declaration of function is compulsory (means declaration of function in header file is compulsory in C++)
- Header files: predefine functions are declared in header files, so whenever you are using any predefine function in your code, you have to include specific header file that contain its declaration
- We need to include header file iostream.h, it contains declaration for the identifier cout and the operator "<<". And also for the identifier cin and operator ">>".
- Header files contains declaration of identifier
- Identifier can be variable name, function name, macro, object etc.

#### endl

- Inserting endl into the output stream causes the screen cursor to move to the beginning of the next line.
- endl is a manipulator and it is declared in iostream.h
- '\n' character also works as it works in C for moving into next line

#### Sample program

<img src="notes/sample program.png" width="400">

---

## Reference variable in C++

#### Types of vaiable

1. ordinary variable
1. pointer variable
1. reference variable

<img src="notes/types of variable.png" width="400">

#### reference variable

- Reference means address
- Reference variable is an internal pointer
- Declaration of reference variable is preceded with '&' symbol (but do not read it as 'address of')
- Reference variable must be initialized during declaration
- It can be initialized with already declared variables only
- Reference variable can not be updated

---

## Functions in C++

#### What is function?

- Function is a block of code performing a unit task
- Function has a name, return type and arguments
- Function is a way to achieve modularization
- Functions are predefined and user defined
- Predefined functions are declared in header files and defined in library files

#### Definition, Declaration and Call

<img src="notes/local function declaration.png" width="400">

- Function declaration is also know as function prototype
- Functions need to be declared before use(just like variables)
- Functions can be declared locally or globally
- Return type functionName(argumentList);
- Function definition is a block of code

#### Declaration

#### Ways to define a function

- Takes nothing, return nothing
- Takes something, return nothing
- Takes nothing, return something
- Takes something, returns something

#### Formal and Actual

takes something return something
<img src="notes/formal and actual.png" width="400">

#### Types of formal arguments

Formal arguments can be of three types

1. Ordinary variable of any type
1. Pointer variable
1. Reference variable

#### Call by value, call by address and call by reference

<img src="notes/call by value.png" width="400">

<img src="notes/call by address.png" width="400">

<img src="notes/call by reference.png" width="400">

---

## Inline function

#### Benefits of function

- easy to read
- easy to modify
- avoids rewriting of same code
- easy to debug
- better memory utilization

#### Function saves memory

- function in a program is to save memory space which becomes appreciable when a function is likely to be called many times

#### Function is time consuming

- However every time a function is called, it takes lot of extra time in executing a series of instructions for tasks such as jumping to the function, saving registers, pushing arguments into the stack and returning to the calling function

- so when function is small it is worthless to spend so much time in such tasks in cost of saving comparatively small space

#### Inline function

- To eliminate the cost of calls to small functions, C++ proposes a new feature called inline function
- An inline function is a function that is expanded in line when it is invoked
- Compiler replace the function call with the corresponding code

#### Inline is a request

- inline is a request not a command
- the benefit of speed of inline functions reduces as the function grows in size
- so the compiler may ignore the request in some situations.

Few of them

- Function containing loop, switch, goto.
- Function with recursion
- Containing static variable

<img src="notes/inline function.png" width="400">

---

#### Function overloading

There are three type in C++ to implement polymorphism

- function overloading (compile time polymorphism)
- operator overloading (compile time polymorphism)
- virtual function (run time polymorphism)

🔴 lecture 5 part 4 code

#### How function overloading is resolved

- first, C++ tries to find an exact match. THis is the case where the actual arguments exactly matches the parameter type of one of the overloaded function
- If no exact match is found, C++ tries to find a match through promotion
  - char, unsigned char, and short is promoted to an int
  - float is promoted to double
- if no promotion is found. C++ tries to find a match through standard conversion

## Structure

#### structure three important points

- structure is collection of dissimilar elements
- structure is a way to group variable
- structure is used to create data type

🔴 code
...

## Classes and objects

- THe only difference between structure and class is that
  - the members of structure are by default public
  - the members of class are by default private

class

```cpp
#include<iostream>
using namespace std;

class Complex{
  private:
    int a;
    int b;

  public:
    void setData(int x, int y){
      a = x;
      b = y;
    }

    void showData(){
      cout << a << " " << b;
    }
};


int main(){
  // c1 is an object
  Complex c1;
  // noun.verb
  c1.setData(3,4);
  c1.showData();
  return 0;
}
```

---

structure

```cpp
#include<iostream>
using namespace std;

struct Complex{
  private:
    int a;
    int b;

  public:
    void setData(int x, int y){
      a = x;
      b = y;
    }

    void showData(){
      cout << a << " " << b;
    }
};


int main(){
  // c1 is an variable
  Complex c1;
  c1.setData(3,4);
  c1.showData();
  return 0;
}
```

## Function call by passing object and returning object

<img src="notes/complex.png" width="400">

```cpp
#include<iostream>
using namespace std;

class Complex{
private:
    int a;
    int b;

public:
    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout << a << " " << b;
    }

    Complex add(Complex c){
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return(temp);
    }
};


int main(){
    Complex c1, c2, c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3 = c1.add(c2);
    c3.showData();

    return 0;
}
```

## Technical jargon

- class is a description of an object
- object is an instance of a class

- instance member variable
  - attribute, data member, fields, properties
- instance member functions
  - methods, procedures, actions, operations, services

## Static members in C++

- static local variables
- static member variables
- static member functions

#### static local variable

- concept as it is taken from C
- they are by default initialized to zero
- their lifetime is throughout the program

```cpp
#include<iostream>
using namespace std;

void fun(){
  static int x;
        int y;
}
```

---

#### Static member variable

- declared inside the class body
- also know as class member variable
- they must be defined outside the class
- static member variable does not belong to any object, but to the whole class
- there will be only one copy of static member variable for the whole class
- any object can use the same copy of class variable
- they can also be used with class name

```cpp
#include<iostream>
using namespace std;

class Account{
  private:
  // instance member variable
    int balance;
    //static member variable or class variable
    static float rateOfInterest;

  public:
    void setBalance(int b){
      balance = b;
    }
};


//membership label ::
// by default is 0
float Account:: rateOfInterest = 3.5f;

void main(){
  Account a1;

}
```

---

##
