#include<iostream>
using namespace std;
float doubleMoney(int current_money,float factor=1.2)
{
    return current_money*factor;
}
int main(){
    int current_money=1000;
    float factor=1.5;
    float c=doubleMoney(current_money);
    cout<<"Money After 1 year for Normal Person="<<c<<endl;
    c=doubleMoney(current_money,factor);
    
    cout<<"Money After 1 year for Vip Person="<<c;

    return 0;
}