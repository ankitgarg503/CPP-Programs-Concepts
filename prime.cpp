#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num,i;
    cout<<"Enter one Number: ";
    cin>>num;
    for( i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            break;
        }
        else
        {
            ;
        }
    }
    if(num==i)
    {
        cout<<"Number is Prime";
    }
    else
    {
        cout<<"Number is not Prime";
    }
    return 0;
}
