#include<iostream>
using namespace std;
int main()
{
   double num,fact=1;
    float sum=0;
    cout<<"Enter How many terms You want to add of Exponential Series  ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
        sum=sum+i/fact;

    }
    cout<<"Factorial of a number ="<<fact;
    cout<<"\n Sum of Exponetial series="<<sum;
    


    
} 
