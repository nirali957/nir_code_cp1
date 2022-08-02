// Template
#include<iostream>
using namespace std;
template<class T>
void display(T t1)
{
    cout<<"Displaying Template:  "<<t1<<"\n";
}
template<class T1,class T2>
void display(T1 t1,T2 t2)
{
    cout<<"displaying Template:  "
        <<t1<<"\t"
        <<t2<<"\n";
}
// void display(int t1)
// {
//     cout<<"Explicitly display:"
//         <<t1<<"\n";
// }
int main()
{
    display(200);
    display(12.40);
    display('G');
    display('G',1.25);
    display('x',1.35);
    display(35,1.25);
    display('N');
    display('N',5.6);
    return 0;
}

