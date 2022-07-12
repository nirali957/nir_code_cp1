#include<iostream>
using namespace std;
class findage
{
    int age;
    public:
    findage(int n)
    {
        age=n;
        cout<<"\n age:"<<age;
    }
    findage(findage &new_age)
    {
        age=new_age.age;
        cout<<"\n age:"<<age;
    }
};
int main()
{
    findage person1(15);
    findage person2(person1);
    return 0;
}