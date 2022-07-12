#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<" please enter your name:\n";
   // cin>>str;
   // cout<<"\n str:"<<str;
    getline(cin,str);
    cout<<"Hello,"<<str
        <<" Welcome to skill qode!\n";
     return 0;
}