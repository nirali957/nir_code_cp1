#include<iostream>
using namespace std;
class bank
{
    int n;
    public:
    bank(int);
    void deposit(int);
    void withdraw(int);
    int totalbalance();
};
bank::bank(int balance)
{
    n=balance;
}
void bank::deposit(int deposite)
{
    n+=deposite;
}
void bank::withdraw(int withdraw)
{
    n-=withdraw;
}
int bank::totalbalance()
{
    int deposite,withdraw,n;
    n=deposite-withdraw;
    if(withdraw>deposite)
    {
        cout<<"\n limit over";
    }
    else
    {
         cout<<"\n total balance"<<n;
    }
    return n;
}
int main()
{
    int deposite,withdraw,n;
    do
    {
    cout<<"\n enter : ";
    cin>>n;

    switch (n)
    {
    case 1:
        cout<<"\n deposit  amount : "; //<<a;
        cin>>deposite;
        break;
    case 2:
        cout<<"\nwithdraw  amount : ";  //<<b;
        cin>>withdraw;
        break;
    case 9:
    n=deposite-withdraw;
        if(withdraw > deposite)
        {
            cout<<"\nlimit over"; //<<n;
        }
        else
        {
            cout<<"\n total available balance : "<<n;
        }
        break;   
    case 0:
        cout<<"\n exit ";
        break;
    default:
        cout<<"\n wrong choice";
        break;
    }
    }while (n!=0); 
}