#include<iostream>
using namespace std;
class shape //abstract class
{
    protected:
        int width;
        int height;
    public:
        virtual int getarea()=0; //pure virtual function (abstract)

        void setwidth(int w)
        {
            width=w;
        }
        void setheight(int h)
        {
            height=h;
        }
};
class Rectangle:public shape
{
    public:
        int getarea()
        {
            return(width*height);
        }
};
class Triangle:public shape
{
    public:
        int getarea()
        {
            return(width*height)/2;
        }
};
int main()
{
    Rectangle rect;
    Triangle Tri;
    rect.setwidth(5);
    rect.setheight(7);

    cout<<"Total Rectangle area:"<<rect.getarea()<<endl;
    Tri.setwidth(5);
    Tri.setheight(7);

    cout<<"Total Triangle area:"<<Tri.getarea()<<endl;
    return 0;

}