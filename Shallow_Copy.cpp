#include<iostream>
using namespace std;

class Base{
    int a,b;
    public:
   
    void sum(void){
        a=543;
        b=6;
        cout<<a+b<<endl;
    }
    void adress(void){
        cout<<&a<<"  "<<&b<<endl;
    }
};

int main(){
    Base b1;
    b1.adress();
    b1.sum();
   Base b2=b1;
    b2.sum();
    b2.adress();
    return 0;
}