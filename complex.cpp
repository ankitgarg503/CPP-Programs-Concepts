#include<iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    void setComplex(int r,int i){
        real = r;imag = i;
    }
    void display(void){
        cout<<"Complex: "<<real<<" +"<<imag<<"i"<<endl;
    }
    Complex addComplex(Complex,Complex);

};
 Complex Complex::addComplex(Complex c1,Complex c2){
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;

 }

int main(){
    Complex c1,c2,c3;
    c1.setComplex(22,33);
    c2.setComplex(24,30);
    c1.display();
    c2.display();
    c3=c3.addComplex(c1,c2);
    c3.display();
    return 0;
}