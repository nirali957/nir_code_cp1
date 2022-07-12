#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class emi
{
    float emi,loan,rate,n,T,pay_int,a,x,m,z,h;  //p=loan amount, r=interest rate, n=loan period, i=payable interest,T=total payment
    public:
    void getdata();
    void printdata();
    float calcdata();
    float calcdata1();
    float calcdata2();
    float cadata1(); 
};
void emi::getdata()
{
    cout<<"\n Enter loan amount:";    
    cin>>loan;                            
    cout<<"\n Enter rate of interest:";  
    cin>>rate;
    cout<<"\n Enter time period in month:";   
    cin>>n;
}
void emi::printdata() 
{
    cout<<"\n\n\n           month"<<"           interest"<<"           emi-interest"<<"            balance";
}
float emi::calcdata()
{
    rate=rate/(12*100);     
    //n=n*12;         // if enter month,no need it.
    emi=(loan*rate*pow(1+rate,n)/(pow(1+rate,n)-1));   
    return emi;
}
float emi::calcdata1()
{
    
    pay_int=emi*n-loan;    
    return pay_int;
}
float emi::calcdata2()
{
    T=loan+pay_int;          // T=total payment
    return T;
}

float emi::cadata1()    
{
    for(int h=1;h<=n;h++)    // h=month
    {
    m=loan*rate;
    z=emi-m;
    a=loan-(z);   //a=loan-(emi-m);
    cout<<"\n\n           "<<h<<"                "<<m<<"              "<<z<<"               "<<a;  
    loan=a;
    }                            

}

int main()
{
    emi a1;
    float emi,T,pay_int;
    a1.getdata();
    emi=a1.calcdata();
    cout<<"\n\n monthly EMI :"<<emi;
    pay_int=a1.calcdata1();
    cout<<"\n\n payable interest :"<<pay_int;
    T=a1.calcdata2();
    cout<<"\n\n Total payment :"<<T;
    a1.printdata();
    a1.cadata1();
    return 0;
}