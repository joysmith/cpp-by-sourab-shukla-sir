### Exceptions

- Exception is any abnormal behaviour, tun time error.
- Exception are off beat situation in your program where your program should be ready to handle it with appropriate response
- C++ provides a built-in error handling mechanism that is called exception handling
- Using exception handling, you can more easily manage and respond to runtime errors

### try, catch, throw

- Program statements that you want to monitor for exceptions are contained in a try block
- If any exception occurs within the try block, it is thrown(using throw)
- The exception is caught, using catch, and processed

<img src="notes/exception block.png" width="400">

```cpp
#include <iostream>
using namespace std;


int main(){

    cout << "Welcome" << endl;

    try{
        throw 10;
        // after throw this line will not execute
        cout << "In try" << endl;
    }
    catch(int e){
        cout << "Exception no: " << e << endl;
    }

    cout << "Last line" << endl;

    return 0;
}

//output
//    Welcome
//    Exception no: 10
//    Last line
```

```cpp
#include <iostream>
using namespace std;


int main(){

    int i = 3;
    cout << "Welcome" << endl;

    try{
        if(i==1)
            throw 1;
        if(i==2)
            throw "hello";
        if(i==3)
            throw 4.5;

        cout << "In try" << endl;
    }

    catch(double e){
        cout << "Exception no: " << e << endl;
    }

    catch(int e){
        cout << "Exception no: " << e << endl;
    }

    cout << "Last line" << endl;

    return 0;
}

//output
//Welcome
//Exception no: 4.5
//Last line
```
