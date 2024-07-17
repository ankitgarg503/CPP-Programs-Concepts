#include <iostream>
using namespace std;

class Bank
{
    int principal;
    int time;
    float rate;

public:
    Bank()
    {
        ;
    }
    Bank(int p, int t, float r)
    {
        principal = p;
        time = t;
        rate = r;
        float total_amount = 0;
        float si;
        si = (principal * time * rate)/100;
        total_amount=si+principal;
        cout<<"Simple Interest="<<si<<endl;
        cout<<"Total Amount="<<total_amount<<endl;
    }
};

int main()
{
    
    int principal;
    int time;
    float rate;
    cout << "Enter PRINCIPAL AMOUNT:";
    cin >> principal;
    cout << "Enter Time:";
    cin >> time;
    cout << "Enter Rate AMOUNT:";
    cin >> rate;
    Bank b1(principal, time, rate),b2;

    return 0;
}