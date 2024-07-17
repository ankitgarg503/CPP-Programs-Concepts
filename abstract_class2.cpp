#include"iostream"
using namespace std;

class Temp{
    public:
   void virtual fun1()=0;
  // void virtual fun2()=0;
   void f1(){
    cout<<"We are in Temp class";
   }
};
class Sun:public Temp{
    int data;
    public:
   void fun1(void){
        cout<<"The wheater is cloudy today!"<<endl;
    }
   void display(){
    cout<<data<<"dcdv";
   }
};

int main(){
       Temp *ptr=new Sun;
      ptr->f1();
    Sun s1;
    s1.fun1();
    return 0;
}