#include<iostream>
using namespace std;

class Base1{
    private:
    int a;
    public:
    int getData(int s){
        a=s;
        return a;
    }
    
};
class Base2{
    private:
    int b;
    public:
    int getData2(int s2){
        b=s2;
        return b;
    }
    
};
class Child:public Base1,public Base2{

    int c=10;
    public:
    void sum(void){
        cout<<"Sum of a+b+c="<<getData(12)+getData2(22)+c<<endl;
    }

};

int main(){
    Child c1;
    // c1.a=12;
    // c1.b=22;
    c1.sum();   
    return 0;
}