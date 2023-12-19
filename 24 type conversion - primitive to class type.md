### Primitive type to class type conversion

- int, char, float, double are primitive type
- class type is any class you define
- data type means category of data

<img src="notes/automatic conversion.png" width="400">

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
    c1 = x;

    return 0;
}

// output
// cannot convert int to complex type

```

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

    // casting operator
    operator int(){
        return a;
    }
};

int main(){

    Complex c1;
    c1.setData(3,4);
    c1.showData();

    int x;
    x = c1; // x = c1.operator int ();
    cout << x;

    return 0;
}

//output
//x: 3
//y: 4
//3
```

###
