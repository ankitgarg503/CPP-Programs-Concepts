#include<iostream>
using namespace std;

class A{
    int a;
   public:
   A(int m){
    a=m;
    cout<<"I am a class A Constructor"<<endl;
   }
   void printA(void ){
    cout<<"I am a class A     "<<a<<endl;
   }

};
class B{
    int b;
    public:
    B(int n){
        b=n;
        cout<<"I am a class B Constructor"<<endl;
    }
     void printB(void ){
    cout<<"I am a class B    "<<b<<endl;
   }


};
class C:public A,virtual public B{
    int c,d;
    public:
    C(int m,int n,int p,int q):A(m),B(n)
    {
        c=p;
        d=q;
        cout<<"I am a class C Constructor"<<endl;
    }
     void printC(void ){
    cout<<"I am a class C    "<<c<<"  "<<d<<endl;
   }
  
};



int main(){
    C obj1(1,2,3,4);
    obj1.printA();
    obj1.printB();
    obj1.printC();

    
    return 0;
}