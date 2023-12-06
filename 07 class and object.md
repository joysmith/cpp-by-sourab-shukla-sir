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

### Function call by passing object and returning object

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

### Technical jargon

- class is a description of an object
- object is an instance of a class

- instance member variable
  - attribute, data member, fields, properties
- instance member functions
  - methods, procedures, actions, operations, services
