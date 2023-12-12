### Pure virtual function

- A do nothing function is pure virtual function, or a function who do not have any definition is know as pure virtual function.
- A class containing pure virtual function is an abstract class
- We cannot instantiate(make object of) abstract class.

<img src="notes/abstract class.png" width="400">

- to make architecture more maintainable
- to make things generic, to provide common feature

```cpp
#include <iostream>
using namespace std;

// any pure virtual function will make class abstract
class Person{
public:
    // how to make pure virtual function
    virtual void f1()=0;

};

class Student : public Person{
public:
    void f1(){
        cout << "student called";
    }
};

int main(){
    Student obj;
    obj.f1();
    return 0;
}
```
