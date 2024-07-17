#include<iostream>
using namespace std;
//+ -   OPerator Overloading

class Complex{
    int real,imag;
    public:
    void setData(int x,int y){
        real = x;imag = y;
    }
    void Display(){
        cout<<"Complex Number="<<real<<"+ "<<imag<<"i"<<endl;
    }
    Complex operator+(Complex o1){
        Complex temp;
        temp.real = real+o1.real;
        temp.imag = imag+o1.imag;
        return temp;
    }
    Complex operator-(){
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }

};


int main(){
    Complex c1,c2,c3,c4;
    c1.setData(1,3);
    c2.setData(5,3);
    c1.Display();
    c2.Display();
  //    c3=c1.operator+(c1,c2);
     c4=-c3;
      //c3=c1.operator+(c2);
     c3=c1+c2;
     c3.Display();
     c4.Display();
    return 0;
}