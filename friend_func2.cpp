#include<iostream>
using namespace std;
class Complex;
class Real;

class Real{
    int re;
 
    public:
     int realValue(Complex c1);
    

};
class Complex{
    int real,imag;
    //  friend class Real;
      friend int Real:: realValue(Complex );
    public:
    void setData(int x,int y){
        real = x; imag = y;
    }
    void Display(void){
        cout<<"Real="<<real<<"\n Imaginary="<<imag<<endl;
    }
};



int Real::realValue(Complex c1){
        re=c1.real;
        return re;
     }


int main(){
   Complex c1;
   Real r1;
   c1.setData(5,7);
 int re=  r1.realValue(c1);   
 cout<<"Real Value of Complex class Data memeber="<<re<<endl;
    return 0;
}