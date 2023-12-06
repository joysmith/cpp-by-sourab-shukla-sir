### Constructor

- Constructor is a member function of a class
- The name of the constructor is same as the name of the class
- It has no return type, so can't use return keyword
- It must be an instance member function, that is, it can never be static

### How to call constructor?

- constructor is implicitly invoked when an object is created
- constructor is used to solve problem of initialization

```cpp
#include<iostream>
using namespace std;

class Complex{
private:
    int a;
    int b;

public:
    Complex(){
      cout << "Hello constructor" << endl;
    }
};


int main(){
    Complex c1, c2, c3;

    return 0;
}
```

### What is the problem of initialization?

- Why it is called constructor?
- What is problem of initialization?
- How constructor resolves this issue?

### Default constructor

```cpp
#include<iostream>
using namespace std;

class Complex{
private:
    int a;
    int b;

public:
// default constructor
  Complex(){}
};


int main(){
  // default constructor will be created by compiler in object file
    Complex c1, c2, c3;

    return 0;
}
```

#### Parameterized constructor

```cpp
#include<iostream>
using namespace std;

class Complex{
private:
    int a;
    int b;

public:
// parameterize constructor
    Complex(int x, int y){
      a = x;
      b = y;
    }

// parameterize constructor
    Complex(int k){
      a = k;
    }

// default constructor
    Complex(){
      a = 0;
      b = 0;
    }
};


int main(){
    // Approach 1:
    Complex c1(3, 4);

    // Approach 2: can be written as
    Complex c2 = Complex (3, 4);

    Complex c3(5);
    //can be written as only for single value constructor
    Complex c4 = 5;

    Complex c3;

    return 0;
}
```

#### Constructor Overloading

```cpp
#include<iostream>
using namespace std;

class Complex{
private:
    int a;
    int b;

public:
// constructor overloading
// parameterize constructor
    Complex(int x, int y){
      a = x;
      b = y;
    }

// parameterize constructor
    Complex(int k){
      a = k;
    }

// default constructor
    Complex(){
      a = 0;
      b = 0;
    }
};


int main(){
    Complex c1(3, 4);
    // can be written as
    // Complex c1 = Complex (3, 4);

    Complex c2(5);
    //can be written as only for single value constructor
    // Complex c2 = 5;
    Complex c3;

    return 0;
}
```

---

## Copy constructor

```cpp
#include<iostream>
using namespace std;

class Complex{
private:
    int a;
    int b;

public:
// parameterize constructor
    Complex(int x, int y){
      a = x;
      b = y;
    }

// parameterize constructor
    Complex(int k){
      a = k;
    }

// default constructor
    Complex(){

    }

    //copy constructor
    Complex(Complex &c){
      a = c.a;
      b = c.b;
    }
};


int main(){
    Complex c1(3, 4);

    Complex c2(5);

    Complex c3;

    // copy constructor called
    Complex c4(c1);
    // can be written as Complex c4 = c1;


    return 0;
}
```
