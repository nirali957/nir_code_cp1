#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum;
    for(i=0;i<5;i++)
    {
        cout<<"Enter a[i]:";
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        sum=a[i]+a[i+1];
        cout<<"\n"<<sum;
    }
}