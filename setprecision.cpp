// setprecision
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float c=3.5567755;
    int a,b,d;
    a=b=d=10.5;  //special assignment

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<d<<endl;
    cout<<c<<endl;
    cout<<setprecision(2)<<c<<endl;
    cout<<setprecision(4)<<c<<endl;
    cout<<setprecision(3)<<c<<endl;
    cout<<setprecision(6)<<c<<endl;
    return 0;
}