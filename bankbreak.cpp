#include <iostream>
using namespace std;
class bank
{
    float bal = 0;

public:
    bank(int n)
    {
        bal = n;
    }
    void deposit_ammount()
    {
        int depamt;
        cout << "\n Enter deoposite ammount :";
        cin >> depamt;
        bal += depamt;
        cout << "\n  " << depamt << " is added in your bank";
    }
    void withdraw_ammount()
    {
        int wiamt;
        cout << "\n Enter withdraw ammount :";
        cin >> wiamt;
        if (wiamt > bal)
        {
            cout << "\n you not able to withdraw";
        }
        else
        {
            bal -= wiamt;
            cout << "\n your  withdraw amt  " << wiamt << "  rupees";
        }
    }
    void display()
    {
        cout << "\n  total ammount in your bank is :" << bal;
    }
};

int main()
{
    int ch;
    bank b(10000);
    do
    {
      
        cout << "\nENTER YOUR CHOICE : ";
        cin >> ch;

        switch (ch)
        {
        case 0:
             break;
        case 1:
              b.deposit_ammount();
            break;
        case 2:
            b.withdraw_ammount();
            break;
        case 9:
            b.display();
            break;
        
        default:
            cout << "INVALID CHOICE";
        }
    } while (ch != 0);
}
