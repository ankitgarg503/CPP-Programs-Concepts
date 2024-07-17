#include<iostream>
using namespace std;

class A{
 
  public:
  void show(void){
    cout<<"Base Class A "<<endl;
  }

};
class B{
 
  public:
  void show(void){
    cout<<"Base Class B"<<endl;
  }

};

class C:public A,public B{
        public:
       const int a=5;
        void fun(void){
            cout<<"Derived Class C"<<endl;
            
            cout<<a<<endl;
        }
};
int main(){
    C obj1;
    obj1.fun();
    obj1.A::show();
    obj1.B::show();
    return 0;
}