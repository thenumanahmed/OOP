#include<iostream>

using namespace std;

class BankAccount{
    long balance;

public:
    //Parameterized Constructor
    BankAccount(long);
    //Shallow Copy Constructor
    BankAccount(const BankAccount &);
    //Mutators
    void setBalance(long);
    //Accessors
    long getBalance();
};

int main(){
    long balance;
    cout<<"Enter the Balance : ";
    cin>>balance;
    
    BankAccount b1(balance);
    cout<<"The balance of the bank b1 is: "<<b1.getBalance()<<endl;
    
    BankAccount b2(b1);
    cout<<"The balance of the bank b2 is: "<<b2.getBalance()<<endl;
    
    
    return 0;
}

// ================== Function Definitions ================= //
BankAccount::BankAccount(long b){
    balance = b;
}
BankAccount::BankAccount(const BankAccount &obj){
    balance = (obj.balance);
}
void BankAccount::setBalance(long b){
    balance = b;
}
long BankAccount::getBalance(){
    return balance;
}

