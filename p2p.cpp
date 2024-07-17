#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* b=&a;
    int** c;
    c=&b;
    cout<<"The adress of a="<<&a<<endl;
    cout<<"The adress of a="<<b<<endl;
    cout<<"The Value of a="<<a<<endl;
    cout<<"The Value of a="<<*b<<endl;
    cout<<"The adress of b="<<&b<<endl;
    cout<<"The adress of b="<<c<<endl;
    cout<<"The Value  of b="<<*c<<endl;
    cout<<"The Value  of a="<<**c<<endl;
    cout<<"The adress  of c="<<&c<<endl;
    return 0;
}