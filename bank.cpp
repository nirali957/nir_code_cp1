#include<iostream>
using namespace std;
class bank{
    int a,w,s;
    public:
    void depo()
    {
        cout<<"\n Enter deposite a:";
        cin>>a;
    }
    void with()
    {
        cout<<"\n Enter withdrow amount w:";
        cin>>w;
    }
    void balance()
    {
        s=a-w;
       
        if(a<w)
        {
            cout<<"\n withdraw limit over";
        }
       else
        {
            cout<<"\n total balance :"<<s;
        }
    
    }
};
int main()
{
    bank b1;
    b1.depo();
    b1.with();
    b1.balance();
}