#include<iostream>
using namespace std;
void swap(int &a,int &b)//call by refernce variable
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    
}
int main(){
    int a=3,b=4;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}