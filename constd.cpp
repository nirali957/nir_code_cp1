#include<iostream>
using namespace std;
class stu
{
    int phy,che,bio,maths,pr,total,x;
    public:
        stu()
        {
            cout<<"\nEnter phy,che,bio,maths:";
            cin>>phy>>che>>bio>>maths;
            total=phy+che+bio;
            cout<<"\n total:"<<total;
            pr=total/4;
            cout<<"\n pr:"<<pr;
        }
        stu(int n)
        {
            x=n;
            cout<<"\nEnter phy,che,bio,maths:";
            cin>>phy>>che>>bio>>maths;
            total=phy+che+bio;
            cout<<"\n total:"<<total;
            pr=total/4;
            cout<<"\n pr:"<<pr;  
            
        }
};
int main()
{
    
    stu s1(10),s2(10),s3(10),s4(10),s5(10);
}
