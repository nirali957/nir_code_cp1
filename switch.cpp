#include<iostream>
using namespace std;
int main()
{
    int n;
    {
        cout<<"\n Enter deposite n:";
        cin>>n;
    }
    switch(n)
    {
        
        case 1:
            cout<<"\nmonday";
            break;
        case 2:
            cout<<"\ntuesday";
            break;
        case 3:
            cout<<"\nwednesday";
            break;
        case 4:
            cout<<"\nThursday";
            break;
        case 5:
            cout<<"\nfriday";
            break;
        case 6:
            cout<<"\nsaturday";
            break;
        default:
            cout<<"\nwrong choice";
            break;
    }
}