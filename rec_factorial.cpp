#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=0;
    if(num==1 || num==0)
    {
        return 1;
    }
    else
    {
        fact=num*factorial(num-1);
       return fact;
    }    
     
}
int main(){
    int num;
    cout<<"Enter one number:  ";
    cin>>num;
    int s=factorial(num);
    cout<<"\nFactorial of a number ="<<s;
    return 0;
}