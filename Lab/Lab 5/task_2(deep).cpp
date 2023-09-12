#include<iostream>

using namespace std;

class BankAccount{
    long *balancePtr;

public:
    //Parameterized Constructor
    BankAccount(long);
    //Deep Copy Constructor
    BankAccount(const BankAccount &);
    //Mutators
    void setBalance(long);
    //Accessors
    long getBalance();
    //Destructor
    ~BankAccount();
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
    balancePtr = new long;
    *balancePtr = b;
}
BankAccount::BankAccount(const BankAccount &obj){
    balancePtr = new long;
    *balancePtr = *(obj.balancePtr);
}
void BankAccount::setBalance(long b){
    *balancePtr = b;
}
long BankAccount::getBalance(){
    return *balancePtr;
}
BankAccount::~BankAccount(){
    delete balancePtr;
    balancePtr = nullptr;
}
