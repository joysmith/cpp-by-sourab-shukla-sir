### Types of conversion

1. primitive type to primitive type
1. primitive type to class type (using constructor)
1. class type to primitive type (using casting operator)
1. class type to class type (using constructor or casting operator)

### Primitive type to class type conversion

- int, char, float, double are primitive type
- class type is any class you define
- data type means category of data

primitive types conversion

<img src="notes/automatic conversion.png" width="400">

```cpp
#include <iostream>
using namespace std;

int main(){
    int x = 4;
    float y;

    // converting int to float
    y = x;
    cout << y << endl;



    float m = 3.14;
    int n;
    // converting float to int
    n = m;
    cout << n << endl;

    return 0;
}

//output
//  4
//  3
```

---

<img src="notes/primitive type to class type.png" width="400">

```cpp
#include <iostream>
using namespace std;

class Complex{
private:
    int a, b;

public:
    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout << "x: " << a << endl << "y: " << b;
    }
};

int main(){

    Complex c1;
    int x = 5;

    // cannot convert int to complex type
    c1 = x;

    return 0;
}

// output
// cannot convert int to complex type

```

- solution use constructor
- Primitive type to class type can be implemented through constructor

```cpp
#include <iostream>
using namespace std;

class Complex{
private:
    int a, b;

public:
    // default constructor
    Complex(){

    }

    Complex(int k){
        a = k;
        b = 0;
    }

    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout << "x: " << a << endl << "y: " << b;
    }
};

int main(){

    Complex c1;
    int x = 5;
    c1 = x;     // c1.Complex(x)
    c1.showData();
    return 0;
}

// output
// x: 5
// y: 0
```

---

### class type to primitive type conversion

```cpp
#include <iostream>
using namespace std;

class Complex{
private:
    int a, b;

public:
    // default constructor
    Complex(){

    }

    Complex(int k){
        a = k;
        b = 0;
    }

    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout << "x: " << a << endl << "y: " << b;
    }
};

int main(){

    Complex c1;
    c1.setData(3,4);
    c1.showData();

    int x;

    //error: cannot convert 'Complex' to 'int'
    x = c1;
    cout << x;

    return 0;
}

//output
//error: cannot convert 'Complex' to 'int' in assignment
```

<img src="notes/casting operator.png" width="400">

```cpp
#include <iostream>
using namespace std;

class Complex{
private:
    int a, b;

public:
    // default constructor
    Complex(){

    }

    Complex(int k){
        a = k;
        b = 0;
    }

    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout << "x: " << a << endl << "y: " << b << endl;
    }

    // casting operator to convert 'Complex' to 'int'
    operator int(){
        return a;
    }
};

int main(){

    Complex c1;
    c1.setData(3,4);
    c1.showData();

    int x;

    // casting operator to convert 'Complex' to 'int'
    x = c1; // x = c1.operator int ();
    cout << x;

    return 0;
}

//output
//x: 3
//y: 4
//3
```

---

### one class type to another class type

<img src="notes/different class.png" width="400">

<img src="notes/class type to another class type.png" width="400">

```cpp
#include <iostream>
using namespace std;

class Item{
private:
    int a,b;

public:
    void showData(){
        cout << "a: " << a << endl << "b: " << b << endl;
    }
};

class Product{
private:
    int m, n;

public:
    void setData(int x, int y){
        m = x;
        n = y;
    }

};

int main(){

    Item i1;
    Product p1;
    p1.setData(3,4);

    //cannot convert 'Product' to 'Item
    i1 = p1;
    i1.showData();

    return 0;
}

//output
//cannot convert 'Product' to 'Item
```

```cpp
#include <iostream>
using namespace std;

class Product{
private:
    int m, n;

public:
    void setData(int x, int y){
        m = x;
        n = y;
    }

    int getM(){
        return m;
    }

    int getN(){
        return n;
    }
};


class Item{
private:
    int a,b;

public:
    Item(){
    }

    // constructor
    Item(Product p){
        a = p.getM();
        b = p.getN();
    }

    void showData(){
        cout << "a: " << a << endl << "b: " << b << endl;
    }
};



int main(){

    Item i1;
    Product p1;
    p1.setData(3,4);

    // i1 constructor is called and p1 passed as argument
    i1 = p1;
    i1.showData();

    return 0;
}

//output
//a: 3
//b: 4

```
