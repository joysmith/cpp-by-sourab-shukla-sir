## Friend function

- Friend function is not a member function of a class to which it is a friend
- Friend function is declared in the class with friend keyword
- It must be defined outside the class to which it is friend
- Friend function can access any member of the class to which it is friend
- Friend function cannot access members of the class directly
- It has no caller object
- It should not be defined with membership label

```cpp
#include<iostream>
using namespace std;
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
        cout << a << " " << b << endl;
    }

    // friend function only declaration inside class
    friend void fun(Complex c);
};

void fun(Complex c){
    cout << "Sum is " << c.a + c.b;
}

int main(){
    Complex c1;
    c1.setData(1,2);
    fun(c1);


    return 0;
}

```

---

## Friend Function

- Friend function can become friend to more than one class

```cpp
#include<iostream>
using namespace std;

class B;
class A;

class A{
private:
    int a;

public:
    void setData(int x){
        a = x;
    }

    friend void fun(A, B);
};

class B{
private:
    int b;

public:
    void setData(int y){
        b = y;
    }

    friend void fun(A, B);

};

void fun(A obj1, B obj2){
    cout << "sum is " << obj1.a+obj2.b;
}

int main(){

    A obj1;
    B obj2;

    obj1.setData(2);
    obj2.setData(3);
    fun(obj1, obj2);

    return 0;
}

// output
// sum is 5
```

---

## Friend function

- Overloading of operator as a friend function

```cpp


```
