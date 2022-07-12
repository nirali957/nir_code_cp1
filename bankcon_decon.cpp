#include<iostream>
using namespace std;
class bank
{
    int balance,n;
    public:
    bank(int);
    bank(bank &);
    ~bank();
    void deposite(int);
    void withdraw(int);
    int showbalance();
    
};
  
    bank::~bank()
    {
        
    }
bank::bank(int amt)
{
    balance = amt;
}
bank::bank(bank &obj)
{
    balance = obj.balance;
}
void bank::withdraw(int amt)
{
    balance -= amt;
}
void bank::deposite(int amt)
{
    balance += amt;
}
int bank::showbalance()
{
    return balance;
}
int main()
{
    int dep,wd,total,n;
    bank me1(1000);
    bank me2(me1);
    cout<<"\n balance : "<<me1.showbalance();
    cout<<"\n balance : "<<me2.showbalance();
}