## Inheritance

- class is used to describe properties and behaviour of an object
- property names and values
- behaviour means actions
- It is a process of inheriting properties and behaviour of existing class into a new class

- Existing class = old class = parent class = base class
- New class = child class = derived class

<img src="notes/car example.png" width="400">

<img src="notes/sports car.png" width="400">

<img src="notes/inheritance syntax.png" width="400">

<img src="notes/inheritance example.png" width="400">

---

## Types of inheritance

- single inheritance
- multilevel inheritance
- multiple inheritance
- hierarchical inheritance
- hybrid inheritance

<img src="notes/single inheritance.png" width="400">

<img src="notes/multilevel inheritance.png" width="400">

<img src="notes/multiple inheritance.png" width="400">

<img src="notes/hierarchical inheritance.png" width="400">

<img src="notes/visibilty mode.png" width="400">

<img src="notes/visibility modes.png" width="400">

🔴 2 example codes

---

#### Is a relationship

- Banana(child) is a fruit(parent)
- Rectangle(child) is a quadrilateral(parent)
- Association
  - aggregation
  - composition
  - inheritance

#### Public Inheritance

- Is a relationship is always implemented as a public interface

```cpp
#include<iostream>
using namespace std;

class Car{
private:
    int gear;

public:
    void incrementGear(){
        if (gear < 5){
            gear++;
        }
    }
};

// sportcar is a car
class SportCar: public Car{
};
```

---

```cpp
#include<iostream>
using namespace std;

class Array{
private:
    int a[10];
public:
    void insert(int index, int value){
        a[index] = value;
    }
};


class Stack: public Array{
private:
    int top;

public:
    void push(int value){
        insert(top, value);
    }
};


int main(){
    Stack s1;
    s1.push(34);
    s1.insert(2, 56);

    return 0;
}


// output
// 8 10
```

## Constructor in inheritance

Question

- We know that constructor is invoked implicitly when an object is created
- In inheritance, when we create object of derived class, what will happen?

```cpp
#include<iostream>
using namespace std;

class A{
public:
    A(){

    }
};

class B: public A{

public:
    // child class constructor call parent constructor, then run its constructor
    // constructor run order: from parent to child
    // constructor call order: from child to parent
    // compiler: B(): A()
    B(){

    }
};

int main(){
    B obj;

    return 0;
}


```

---

```cpp
#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(int k){
        a = k;
    }
};

class B: public A{
    int b;

public:
    // child class constructor call parent constructor, then run its constructor
    // constructor run order: from parent to child
    // constructor call order: from child to parent
    // compiler: B(): A()
    B(int x, int y):A(x){
        b = y;
    }
};

int main(){
    B obj(2, 3);

    return 0;
}


// output
// 8 10
```

---

```cpp
#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(int k){
        a = k;
    }

    ~A(){

    }
};

class B: public A{
    int b;

public:
    B(int x, int y):A(x){
        b = y;
    }

    // destructor execution order: child to parent
    // destructor call order: child to parent
    ~B(){

    }
};

int main(){
    B obj(2, 3);

    return 0;
}

```

---

## This pointer in C++

#### Object pointer

- A pointer contains address of an object is called Object pointer

```cpp
#include<iostream>
using namespace std;

class Box{
private:
    int l, b, h;
public:
    void setDimension(int x, int y, int z){
        l = x;
        b = y;
        h = z;
    }

    void showDimension(){
        cout << "l " << l << endl;
        cout << "b " << b << endl;
        cout << "h " << h << endl;
    }
};

int main(){
    Box smallBox;
    smallBox.setDimension(12, 10, 5);
    smallBox.showDimension();

    return 0;
}

// output
// l 12
// b 10
// h 5
```

---

<img src="notes/object pointer.png" width="400">

```cpp
#include<iostream>
using namespace std;

class Box{
private:
    int l, b, h;
public:
    void setDimension(int x, int y, int z){
        l = x;
        b = y;
        h = z;
    }

    void showDimension(){
        cout << "l " << l << endl;
        cout << "b " << b << endl;
        cout << "h " << h << endl;
    }
};

int main(){
    Box *p,smallBox;
    p = &smallBox;

    p->setDimension(12, 10, 5);
    p->showDimension();

    // smallBox.setDimension(12, 10, 5);
    //smallBox.showDimension();

    return 0;
}

// output
//    l 12
//    b 10
//    h 5

```

#### this pointer

- this is a keyword
- this is a local object pointer in every instance member function containing address of the caller object
- this pointer can not be modify
- it is used to refer caller object in member function

```cpp
#include<iostream>
using namespace std;

class Box{
private:
    int l, b, h;
public:
    void setDimension(int l, int b, int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void showDimension(){
        cout << "l " << l << endl;
        cout << "b " << b << endl;
        cout << "h " << h << endl;
    }
};

int main(){
    Box *p,smallBox;
    p = &smallBox;

//   p->setDimension(12, 10, 5);
//   p->showDimension();

    smallBox.setDimension(12, 10, 5);
    smallBox.showDimension();

    return 0;
}

// output
//    l 12
//    b 10
//    h 5

```

---

## new and delete keyword

<img src="notes/static memory.png" width="400">
<img src="notes/new keyword.png width="400">
<img src="notes/new keyword array .png" width="400">
<img src="notes/delete.png" width="400">

#### Method overloading

#### Method Overriding

```cpp
#include<iostream>
using namespace std;

class A {
    void f1(){

    }
};

class B : public A{
    // method overriding
    void f1(){

    }
};

```

---

```cpp
#include<iostream>
using namespace std;

class A {
    void f1(){

    }

    void f2(){

    }
};

class B : public A{
    // method overriding: when name is same
    void f1(){

    }

    // method hiding: when name is same argument are different
    void f2(int x){

    }
};

```

---

```cpp
#include<iostream>
using namespace std;

class Car {
public:
    void shiftGear(){ }

    void f2(){ }
};

class SportsCar : public Car{
public:
    // method overriding
    void shiftGear(){ }

    // method overriding
    void f1(){ }

    // method hiding
    void f2(int x){ }
};


int main(){
    SportsCar obj;
    obj.shiftGear();

    // obj.f2(); //error
    obj.f2(4);

    return 0;
}


```

#### Method hiding

```cpp
#include<iostream>
using namespace std;

class A {
public:
    void f1(){

    }

    void f2(){

    }
};

class B : public A{
public:
    // method overriding
    void f1(){

    }

    // method hiding
    void f2(int x){

    }
};


int main(){
    B obj;
    // B class version: early binding
    obj.f1();

    // error: function overloading all version of function must be in one class
    obj.f2();

    // B class version: early binding
    obj.f2(5);

    return 0;
}

// output
// error

```

---

## Virtual function

#### Base class pointer

- Base class pointer can point to the object of any of its descendant class
- But its converse is not true means child class pointer cannot point to parent class

```cpp
#include<iostream>
using namespace std;

class A{
public:
    // for late binding
    // not pointer but pointer content
    virtual void f1(){}
};

class B : public A{
public:
    void f1(){} // function overriding
    void f2(){}
};

int main(){
    A *p, o1;
    B o2;
    p = &o2;
    p -> f1(); //A

    return 0;
}


```

---

### Multiple inheritance

- A class which contain more base class and only one derive class is called multiple inheritance

<img src="notes/multiple inheritance issue.png" width="400">
