//bank with switch program
//single inheritence
#include<iostream>
using namespace std;
class Bank
{
    protected:
    int bal=10000;
    public:
    int s,depo,withd;
    void deposite()
    {
        cout<<"\n Available balance : "<<bal<<"\n";    

        cout<<"\n Enter deposite amount : ";
        cin>>depo;             // Enter deposite amount
    }
    void withdraw()
    {    
        s=bal+depo;   // //s=bal+depo ,s=deposite added balance
        cout<<"\n Enter withdraw amount : ";
        cin>>withd;               // Enter withdraw amount
    }
   
    void calculation()
    {
        bal=s-withd;          // bal = (bal+depo)-withd
        if(withd>s)
        {
            cout<<"\n Limit over";
        }
        else
        {
            cout<<"\n Total available balance : "<<bal;
        }
    }
};
class User:public Bank
{
    public:
    char str[20];
    void printdata()
    {
        cout<<"\n USER NAME : ";
        cin>>str;
    }
};
int main()
{
    User u;
    int n;
    do
    {
    cout<<"\n\n Enter  your chioce: ";
    cin>>n;
    switch(n)
    {
        
    case 1:
        u.printdata(); 
        break;
    case 2:
        u.deposite();
        break;
    case 3:
        u.withdraw();
        break;
    case 4:
        u.calculation();
        break;    
    case 0:
        cout<<"\n EXIT ALL";
        break;   
    default:
        cout<<"\n WRONG";
        break;
    }
    }while(n!=0);
    
}