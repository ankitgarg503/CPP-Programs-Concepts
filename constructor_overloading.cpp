#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(){
       a=1;b=1;
    }
    Complex(int x,int y)
    {
          a=x;
          b=y;

    }
    Complex(int x){
        a=x;
        b=0;

    }
    void show(void){
        cout<<"Complex number="<<a<<" + "<<b<<" i"<<endl;
    }
};



int main(){
    Complex c1;
    Complex c2(3,7);
    Complex c3(5);
    c1.show();
    c2.show();
    c3.show();
    
    return 0;
}