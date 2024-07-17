#include<iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b) {
    T temp;
    temp=a;
    a=b;
    b=temp;

}

int main(){
    char x=2.67,y=3.98;
    swapp(x,y);
    cout<<"x="<<x<<" y="<<y<<endl;
    return 0;
}