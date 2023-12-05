### structure three important points

- structure is collection of dissimilar elements
- structure is a way to group variable
- structure is used to create data type

### How to define structure datatype

```cpp
// book datatype global define
struct book{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    // Approach 1: C tyle
    struct book book1;

// Approach 2: C++ tyle
    book book2;

}
```

### defining structure

<img src="notes/structure in memory.png" width="400">

```cpp
// storing book related information inside object
// book datatype global define
struct book{
    int bookid;
    char title[20];
    float price;
}book2;     // Approach 1: declaring global variable

// Approach 2: declaring global variable
book book3;


int main()
{

    // declaring local space global vaiable
    book book2;

}
```

---

### assigning, copying structure value

```cpp
#include <string>
using namespace std;

// storing book related information inside object
// book datatype global define
struct book{
    int bookid;
    string title;
    float price;
};

int main()
{
    // approach 1: two step- declaration then initialization
    book book1;
    book1.bookid = 11;
    book1.title = "android by j";
    book1.price = 50;

    // appraoch 2: one step- declaration and initialization
    book book2 = {100, "C++ by joy", 450.50};

    /********************** copy value from one to another ***************************/

    // approach 1:how to copy info/value from one to another
    book book3;
    book3.bookid = book2.bookid;

    // approach 2: only if data types are same
    book3 = book2;
}
```

### Taking input from user for structure

```cpp
#include <iostream>
#include <string>
using namespace std;

// storing book related information inside object
// book datatype global define
struct book{
    int bookid;
    string title;
    float price;
};

int main()
{
    book book1;
    cout << "Enter bookid, title, price of book";

    cin >> book1.bookid >> book1.title >> book1.price;

    return 0;
}
```

---

```cpp
#include <iostream>
#include <string>
using namespace std;

// storing book related information inside object
// book datatype global define
struct book{
    int bookid;
    string title;
    float price;
};

void display(book);
book input();

int main()
{
    book book1;
    book1 = input();
    display(book1);
    return 0;
}

void display(book b){
    cout << b.bookid << " " << b.title << " " << b.price;
}

book input(){
    book b;
    cout << "Enter bookid, title, price of book";
    cin >> b.bookid >> b.title >> b.price;
    return  b;
}

  // Enter bookid, title, price of book22
  // android
  // 100.99
  // 22 android 100.99
```

### encapsulation in structure

```cpp
#include <iostream>
#include <string>
using namespace std;

// book datatype global define
struct book{
    int bookid;
    string title;
    float price;

    void input() {
        cout << "Enter bookid, title and price" << endl;
        cin >> bookid >> title >> price;
    }

    void display(){
        cout << bookid << " " << title << " " << price;
    }

};

void display(book);
book input();

int main()
{
    book book1;
    book1.input();
    book1.display();
    return 0;
}


// output
// Enter bookid, title and price
//    12
//    c
//    7.99
//    12 c 7.99
```

### access modifier in structure

```cpp
#include <iostream>
#include <string>
using namespace std;

// book datatype global define
struct book{
private:
    int bookid;
    string title;
    float price;

public:
    void input() {
        cout << "Enter bookid, title and price" << endl;
        cin >> bookid >> title >> price;
    }

    void display(){
        cout << bookid << " " << title << " " << price;
    }
};


int main()
{
    book book1;
    book1.input();
    book1.display();
    return 0;
}


// output
// Enter bookid, title and price
//    12
//    c
//    7.99
//    12 c 7.99
```
