#include<iostream>
using namespace std;

class Account{
  private:
  // instance member variable
    int balance;
    //static member variable or class variable
    static float rateOfInterest;

  public:
    void setBalance(int b){
      balance = b;
    }

    static void setRateOfInterest(float r){
      rateOfInterest = r;
    }
};


//membership label ::
// by default is 0
float Account:: rateOfInterest = 3.5f;

void main(){
  Account a1, a2;
  Account::setRateOfInterest(4.5f);
}