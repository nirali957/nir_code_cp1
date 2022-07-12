#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
    public:
    loc()
    {
        longitude=0;
        latitude=0;
    }
    loc(int lg,int it)
    {
        longitude=lg;
        latitude=it;
    }
    void show()
    {
        cout<<"\n longitude:"<<longitude<<" ";
        cout<<"\n latitude:"<<latitude<<"\n";

    }
   friend loc operator+(loc,loc);
};
 loc operator+(loc op1,loc op2)
{
    loc temp;
    temp.longitude=op1.longitude +op2.longitude;
    temp.latitude=op1.latitude +op2.latitude;
    return temp;

}
int main()
{
    loc ob1(10,20),ob2(5,30),ob3;
    ob1.show();
    ob2.show();

    ob3=ob1+ob2;
    ob3.show();
    return 0;

}