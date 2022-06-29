#include<iostream>
using namespace std;
class student
{
    private:
    int m1,m2,m3,per,total;
    public:
        void data()
        {
            int m1,m2,m3,per,total;

            cout<<"\n\n marks :";
            cin>>m1>>m2>>m3;
        }
        void calc()
        {
            total=m1+m2+m3;
            per=total/3;
           
        }
        void print()
        {
            cout<<"\n total :"<<total;
            cout<<"\n per :"<<per;

        }
           /* cout<<"\n grade :";
            if(per>=75)
            {
                cout<<" A ";
            }
            else if(per>=60 && per<=74)
            {
                cout<<" B ";
            }
            else if(per>=45 && per<=59)
            {
                cout<<" C ";
            }
            else if(per>=35 && per<=44)
            {
                cout<<" D ";
            }
            else
            {
                cout<<" Fail ";
            }*/
            
};
int main()
{
   int i;
   student s1 [10];
   for(i=0;i<3;i++)
   {
    s1[i].get data();
    s1[i].calc();
   }
    for(i=0;i<3;i++)
    {
        s1[i].print();
    }
}