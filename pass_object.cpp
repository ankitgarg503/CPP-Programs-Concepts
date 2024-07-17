#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;
    public:
    void getData(int r,int i){
         real=r;
        imag=i;
    }
    void sumComplex(Complex o1,Complex o2){
        real=o1.real+o2.real;
        imag=o1.imag+o2.imag;

    }
   
    void display(void){
        cout<<"Complex Number="<<real<<" + "<<imag<<" i"<<endl;
            
    }
};

int main(){
    Complex c1,c2,c3;
    c1.getData(3,5);
    cout<<"First Complex Number Given Below"<<endl;

    c1.display();
    c2.getData(4,7);
    cout<<"Second Complex Number Given Below"<<endl;
    c2.display();
    cout<<"Sum of  Complex Number Given Below"<<endl;
    c3.sumComplex(c1,c2);
    c3.display();
    
}