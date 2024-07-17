#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    void getReal(int real){
      this->real = real;
    }
    void getImag(int imag){
        this->imag = imag;
    }
    void display(){
        cout<<real<<" + "<<imag<<" i"<<endl;
    }
     
     Complex operator+(Complex c2){
           Complex c3;
           c3.real = real + c2.real;
           c3.imag = imag + c2.imag;
           return c3;
     }

};
int main(){
    Complex c1, c2;
    c1.getImag(5);
    c1.getReal(3);
    cout<<"First Complex Number=";
    c1.display();
   
    c2.getReal(6);
    c2.getImag(2);
    cout<<"Second Complex Number=";
    c2.display();

//   Complex  c3=c1.operator+(c2);
  Complex c3=c1+c2;
  cout<<"Sum of First and Second Complex Number=";
  c3.display();
    return 0;
}