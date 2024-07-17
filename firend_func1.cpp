// Using friend Function we can access private memebers of the class

#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;

    friend Complex  productComplex(Complex c1 , Complex c2);
    public:
    void getData(int a,int b){
        real=a;
        imag=b;
    }
        void display(void){
            cout<<"The complex No ="<<real<<" + "<<imag<<" i"<<endl;
        }
    };
Complex productComplex(Complex c1,Complex c2){
    Complex sum;
    sum.real=c1.real*c2.real;
    sum.imag=c1.imag*c2.imag;
    return sum;
}


int main(){
    Complex c1, c2, c3;
    c1.getData(13,52);
    c1.display();
    c2.getData(22,77);
    c2.display();
    c3=productComplex(c1,c2);
    c3.display();
    return 0;
}