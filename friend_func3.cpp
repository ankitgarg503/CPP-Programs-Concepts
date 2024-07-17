#include<iostream>
using namespace std;

class Imag;
class Real{
    int r;

    friend void user( Real ,Imag);
    friend void exchange( Real & ,Imag &);
    public:
    void setData(int x){
        r=x;

    }
    void Display(){
        cout<<"The value of real="<<r<<endl;
    }
};

class Imag{
    int i;
    friend void user( Real ,Imag);
   friend void exchange( Real & ,Imag &);
    public:
    void setData(int x){
        i=x;

    }
    void Display(){
        cout<<"The value of imaginary="<<i<<endl;
    }
};
void user(Real o1, Imag o2){
  int sum;
  sum=o1.r+o2.i;   
  cout<<"sum = "<<sum<<endl;
} 

void exchange(Real &o1, Imag &o2){
    int temp;
    temp=o1.r;
    o1.r=o2.i;
    o2.i=temp;
}

int main(){

    Real r1;
    r1.setData(3);
    r1.Display();
    Imag i1;
    i1.setData(5);
    i1.Display();
    user(r1,i1);
    exchange(r1,i1);
    r1.Display();
    i1.Display();
    return 0;
}