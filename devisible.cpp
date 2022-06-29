#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a&b:";
    cin>>a>>b;
    c=a*b;
    cout<<"\n multiplication  c :"<<c;
    if(c%3==0&&c%7==0)
    {
        cout<<"\n c is devisible by 3&7";
    }
    else
    {
        cout<<"\n c is not devisible by 3&7";
    }
    

}