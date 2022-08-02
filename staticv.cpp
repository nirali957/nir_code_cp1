#include<iostream>
using namespace std;
class statcount
{
    static int stcount;
    public:
    void set_stcount(int n)
    {
        stcount=n;
    }
    void counter()
    {
        stcount++;
    }
    void get_stcount()
    {
        cout<<"\n"<<stcount;
    }
};
int statcount::stcount=0;
int main()
{
    statcount obj1,obj2,obj3;
    obj1.set_stcount(10);
    obj1.get_stcount();
    obj2.counter();
    obj2.counter();
    obj2.counter();
    obj2.counter();
    obj2.set_stcount(25);
    obj3.counter();
    obj3.get_stcount();
}