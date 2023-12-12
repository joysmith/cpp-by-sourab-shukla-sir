### Base class pointer

- Base class pointer can point to the object of any of its descendant class
- But its converse is not true

```cpp
#include <iostream>
using namespace std;

class A{
public:
    void f1(){
        cout << "A called";
    }
};

class B : public A{
public:
    void f1(){
        cout << "B called";
    }
};

int main(){
    A *p, obj1;
    B obj2;
    p = &obj2;
    p->f1();

    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

class A{
public:
    virtual void f1(){
        cout << "A called";
    }
};

class B : public A{
public:
    void f1(){
        cout << "B called";
    }
};

int main(){
    A *p, obj1;
    B obj2;
    p = &obj2;
    p->f1();

    return 0;
}
```
