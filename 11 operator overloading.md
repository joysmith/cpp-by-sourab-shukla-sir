### Operator overloading

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
        cout << a << " " << b << endl;
    }

    Complex add( Complex c){
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return(temp);
    }
};


int main(){
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);

    // won't work compiler don't know the definition
    // c3 = c1 + c2;

    c3 = c1.add(c2);
    c3.showData();

    return 0;
}
```

---

changing method name add to sum

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
        cout << a << " " << b << endl;
    }

    Complex sum( Complex c){
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return(temp);
    }
};


int main(){
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);

    // won't work compiler don't know the definition
    // c3 = c1 + c2;

    c3 = c1.sum(c2);
    c3.showData();

    return 0;
}
```

---

Operator overloading

- When an operator is overloaded with multiple jobs, it is know as operator overloading
- It is a way to implement compile time polymorphism

#### Rules to remember

- Any symbol can be used as function name
  - If it is a valid operator in C language
  - If it is preceded by operator keyword
- You can not overload sizeof and ? : operator

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
        cout << a << " " << b << endl;
    }

    // how to use preexisting operator name for function naming
    Complex operator +( Complex c){
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return(temp);
    }
};


int main(){
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);

    // won't work compiler don't know the definition
    // c3 = c1 + c2;

    // Approach 1: can be written as
    c3 = c1.operator + (c2);

    // Approach 2: can be written as
    c3 = c1 + c2;

    c3.showData();

    return 0;
}

// Binary operator overloading
// c3 = c1 + c2
// here c1 is the caller object
```

---

## Unary operator overloading

- Overloading of unary operator

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
        cout << a << " " << b << endl;
    }

   //
   Complex operator-(){
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return(temp);
    }
};


int main(){
    Complex c1, c2, c3;
    c1.setData(3, 4);

    // approach 1
    c2 = c1.operator-();

    // approach 2
    c2 =- c1;

    c2.showData();

    return 0;
}
```

---

## Increment operator overloading

- Overloading of unary operator ++(pre & post)

```cpp
#include<iostream>
using namespace std;

class Integer{
private:
    int x;

public:
    void setData(int a){
        x = a;
    }

    void showData(){
        cout << "x = " << x;
    }
};


int main(){
    Integer i1;
    i1.setData(3);
    i1.showData();

    return 0;
}

// output
//x = 3
```

---

pre increment operator

```cpp
#include<iostream>
using namespace std;

class Integer{
private:
    int x;

public:
    void setData(int a){
        x = a;
    }

    void showData(){
        cout << "x = " << x << endl;
    }

    // preincrement
    Integer operator++(){
        Integer i;
        i.x =++ x;
        return (i);
    }
};


int main(){
    Integer i1, i2;
// i2 = i1.operator++();
//  i2 = ++i1;
    i2 = ++i1;
    i1.showData();
    i2.showData();

    return 0;
}

// output
//x = 3
```

---

post increment

```cpp
#include<iostream>
using namespace std;

class Integer{
private:
    int x;

public:
    void setData(int a){
        x = a;
    }

    void showData(){
        cout << "x = " << x << endl;
    }

    // preincrement
    Integer operator++(){
        Integer i;
        i.x =++ x;
        return (i);
    }

    //  post increment
    Integer operator++(int){
        Integer i;
        i.x = x++;
        return i;
    }
};


int main(){
    Integer i1, i2;
    i1.setData(3);
    i1.showData();
    i2 = i1++;
    i2.showData();

    return 0;
}

// output
//x = 3
//x = 3
```

---

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
        cout << a << " " << b << endl;
    }

    friend Complex operator +(Complex, Complex);
};


// how to use preexisting operator name for function naming
Complex operator +( Complex X, Complex Y){
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return(temp);
}


int main(){
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);

    // old explanation
    // c1 calls member function i.e "+" operator, then c2 passed as an argument, then what is returned by "+" is assigned to c3
    // c3 = c1.operator+(c2)

    // new explanation
    // c3 = operator+(c1, c2)
    c3 = c1 + c2;

    c3.showData();

    return 0;
}



// output
// 8 10
```
