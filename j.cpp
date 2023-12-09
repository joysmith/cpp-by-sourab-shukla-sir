#include <iostream>
using namespace std;

class Natural{
private:
    int res;

public:
    void loop(){
        res = 0;
        for(int i = 1; i<=100; i++){
            res = res + i;
        }

        cout << "The sum of all natural number is " << res;
    }
};


int main(){
    Natural obj;
    obj.loop();
    return 0;
}

// output
// The sum of all natural number is 5050