#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout<<"base class is invoked"<<endl;
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"Derived class is invoked"<<endl;
    }
};
int main()
{
    Base *p,b;
    Derived d;
    p=&b;
    p->display();
    p=&d;
    p->display();
//  Derived d;
//  d.display();
//  Base b;
//  b.display(); 
}
