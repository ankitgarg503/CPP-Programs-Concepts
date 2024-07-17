#include<iostream>
using namespace std;
int main(){
    cout<<"This Program is Going to Caculate the sum of 5 digit number";
    int num,rem,sum=0;
    cout<<"\nEnter a 5 digit Number\n";
    cin>>num;
    while (num>0)
    {
       rem=num %10;
       sum=sum+rem;
       num=num/10;
    }
    cout<<"Sum of 5 digit Number="<<sum;
    
    return 0;
}