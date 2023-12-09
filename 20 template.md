### Template

- The keyword template is used to define function template and class template
- It is a way to make your function or class generalize as far as data type is concern
- types of template
  - class template
  - functional template

Function Template

- solving data-type problem by using function overloading

```cpp
#include<iostream>
using namespace std;

// function for int value
int big(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

// function for double value
double big(double a, double b){
    if(a>b)
        return a;
    else
        return b;
}


int main(){
    cout << big(4,5) << endl;
    cout << big(5.6,7.9) << endl;
    return 0;
}
```

---

Function template or Generic template

- Function template is also know as generic function
- template<class type> type function_name(type arg1, ...){}

```cpp
#include<iostream>
using namespace std;

// How to create template function
template <class X>X big(X a, X b){
    if(a>b)
        return a;
    else
        return b;
}


int main(){
    cout << big(4,5) << endl;
    cout << big(5.6,7.9) << endl;
    return 0;
}
```

---

How to pass different data type in Generic function

```cpp
#include<iostream>
using namespace std;

// How to create template function by passing different data type
template <class X, class Y>
X big(X a, Y b){
    if(a>b)
        return a;
    else
        return b;
}


int main(){
    cout << big(4,5) << endl;
    cout << big(5.6,7.9) << endl;
    return 0;
}
```

## class template

- class template is also known as generic class
- template<class type> class class_name{...};

```cpp

```
