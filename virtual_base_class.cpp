#include<iostream>
using namespace std;

class A{
    public:
        int uid;
        public:
        void set_uid(int id)
        {
            uid=id;
        }
};

class B:public virtual A{
    public:
    void fun1(void){
        uid=20;
        cout<<"We are in class B"<<endl;
    }

};
class C:public virtual  A{
    public:
    void fun2(void){
        cout<<"We are in class C"<<endl;
    }
};
class D:public B,public C{
    public:
    void display(void){
        cout<<"Your uid is "<<uid<<endl;
        fun1();
        cout<<"Your uid is "<<uid<<endl;
        fun2();
        cout<<"We are in class D\n";

    }
};






int main(){
    D obj1;
    obj1.set_uid(11);
    obj1.display();   
    return 0;
}