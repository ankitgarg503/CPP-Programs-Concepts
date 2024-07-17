#include<iostream>
using namespace std;

class Programming{
    public:
    void technical(void ){
        cout<<"We are study about programming"<<endl;
    }
};
class C{
    public:
    void technical(void ){
        cout<<"We are study about C programming"<<endl;
    }

};
class CPP:public Programming,public C{
    int a;
    public:
    //  void technical(void ){
    //     Programming::technical();
    //     C::technical();
    // }

};



int main(){
    Programming p1;
    C c1;
    CPP c2;
    p1.Programming::technical();
    c1.technical();
    c2.Programming::technical();
    return 0;
}