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

### static member function

- static member function are qualified with the keyword static
- static member function are also called class member functions
- static member function can be invoked with or without object
- static member function can only access static members of the class
- static member function can be called with object and without object

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

    // static member function can only access static members,
    // because they can be called without object
    static void setRoi(float r){
        rateOfInterest = r;
    }
};


// "::" membership label or scope resolution operator
// by default is 0
 // how to access static member variable using scope resolution operator
float Account:: rateOfInterest = 3.5f;

int main(){
    Account a1, a2;
    a1.setRoi(4.5f);

    // how to access static member function using scope resolution operator
    Account::setRoi(4.5f);
}
```
