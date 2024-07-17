#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A & getData(int a){
        this->a=a;
        return *this;
    }
    void Display(){
        cout<<a<<endl;
    }
};


int main(){
    A o1;
    o1.getData(4).Display();
    // o1.Display();
    
    return 0;
}