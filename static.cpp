#include<iostream>
using namespace std;
class bank
{
    int accno,balance;
    string myname;
    public:
    static int count;
    bank(int accno,int balance,string myname)
    {
        this-> accno=accno;
        this-> balance=balance;
        this-> myname=myname;
        count++;

    }
    void getdata()
    {
        cout<<"\n"<<myname<<":"<<accno<<"-"<<balance;
    }

};
int bank::count;

int main()
{
    bank n(101,1500,"nenu"),p(102,170,"preet");
    n.getdata();
    p.getdata();
    cout<<"\n no.of account:"<<bank::count;
    return 0;
}