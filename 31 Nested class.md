### Nested class

- Class inside a class is called nested class
- A nested class is a member and as such has the same access rights as any other member.
- The members of an enclosing class have no special access to members of a nested class; the usual access rules shall be obeyed.

```cpp
#include <string.h>
#include <iostream>

using namespace std;

class Student{
private:
    int rollno;
    char name[20];

    class Address{
    private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];

    public:
        void setAddress(int h, char* s,char* c, char* st, char* p ){
            houseno = h;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
        }

        void showAddress(){
            cout << endl << houseno << endl;
            cout << street << " " << city << " " << pincode<< endl;
            cout << state;
        }
    };



public:
    Address add;

    void setRollno(int r){
        rollno = r;
    }

    void setName(char* n){
        strcpy(name, n);
    }

    void setAddress(int houseno, char* street, char* city,char* state, char* pincode ){
        add.setAddress(houseno, street, city, state, pincode);
    }

    void showStudent(){
        cout << "student Data" << endl;
        cout << rollno << " ";
        cout << name << " ";
        add.showAddress();
    }
};

int main(){
    Student s1;
    s1.setRollno(170);
    s1.setName("joy");
    s1.setAddress(301, "gour circle", "jabalpur", "482020", "MP");
    s1.showStudent();
    return 0;
}

//output
//student Data
//170 joy
//301
//gour circle jabalpur MP
//482020
```

---

My version

```cpp

#include <iostream>

using namespace std;

class Student{
private:
    int mrollno;
    string mname;

    class Address{
    private:
        int mhouseno;
        string mstreet;
        string mcity;
        string mstate;
        string mpincode;

    public:
        void setAddress(int houseno, string street,string city, string state, string pincode ){
            mhouseno = houseno;
            mstreet = street;
            mcity = city;
            mstate = state;
            mpincode = pincode;
        }

        void showAddress(){
            cout << endl << mhouseno << ", ";
            cout << mstreet << ", " << mcity << ", " << mpincode<< ", " << mstate << endl;
        }
    };



public:
    Address add;

    void setRollno(int rollno){
        mrollno = rollno;
    }

    void setName(string name){
        mname = name;
    }

    void setAddress(int houseno, string street, string city,string state, string pincode ){
        add.setAddress(houseno, street, city, state, pincode);
    }

    void showStudent(){
        cout << "----student Data----" << endl;
        cout << mrollno << " ";
        cout << mname << " ";
        add.showAddress();
    }
};

int main(){
    Student s1;
    s1.setRollno(170);
    s1.setName("joy");
    s1.setAddress(301, "gour circle", "jabalpur", "482020", "MP");
    s1.showStudent();
    return 0;
}

//output
//----student Data----
//170 joy
//301, gour circle, jabalpur, MP, 482020
```
