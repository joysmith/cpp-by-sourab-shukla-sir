#### History of C++

<img src="notes/Bjarne.jpg" width="400">

- Invented by Bjarne stroustrup
- 1978-1979 launch
- AT & T bell labs
- C with classes
- 1983 C++

#### Facts of C++

- C++ OOP was inspired by computer simulation language called Simula67
- JAVA is written in C++
- Major operating systems of modern times are written in C++
- C++ is world 4 most used programming language

#### Features of C++

- C++ is a middle level language, means we can do low level programming(machine dependant coding- device drivers) and high level programming(application software- hardware independent coding)
- C++ support principle of Object oriented paradigm
- C++ joins three separate programming traditions

1. procedural language tradition, represent by C
1. object-oriented language tradition, represented by the class enhancements C++ adds to C
1. generic programming, supported by C++ templates

#### Comparison between C and C++

- C++ is a super set of C language, means we can use old features(like array, loops, conditions, data type, etc) in C++ provided in C
- C++ programs can use existing C software libraries
- C follows top down approach of programming
- C++ follows bottom up approach of programming
- C adopts procedural oriented programming
- C++ adopts object oriented programming

#### What is Object oriented programming

- OOPs is a programming approach which revolves around the concept of "Objects".
- Any entity in the system that can be defined as a set of properties and set of operations performed using entity's property set, is known as object
- 5 principle

1. Encapsulations
1. Data Hiding
1. Abstraction
1. Polymorphism
1. Inheritance

#### Classes and Objects

- class is a blueprint of an object
- class is class a description of Object's property set and set of operations
- creating class is as good as defining a new data type
- class is a means to achieve encapsulation
- object is a run time entity
- object is an instance of a class

<img src="notes/classvsobject.png" width="400">

```cpp
class box{
  int l, b, h;

  void setDimension(int x, int y, int z){
    // logic
  }


  void showDimension(){
    // logic
  }
};
```

#### Software development process in c++

objective - we have to make exe file i.e our software.

<img src="notes/software development.png" width="400">
