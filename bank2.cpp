#include<iostream>
using namespace std;
class bank
{
    int balance;
    public:
    bank(int);
    void deposite(int);
    void withdraw(int);
    int showbalance();
};
    bank::bank(int amt)
    {
        balance=amt;
    }
    void bank::deposite(int amt)
    {
        balance+=amt;
    }
    void bank::withdraw(int amt)
    {
        balance-=amt;
    }
    int bank::showbalance()
    {
        return balance;
    }
  int main()
  {
  
    int dep_amt;
    bank raj(1000);
    cout<<"\n balance:"<<raj.showbalance();
    raj.deposite(500);
    cout<<"\n balance:"<<raj.showbalance();
    raj.withdraw(800);
    cout<<"\n balance:"<<raj.showbalance();
  }
