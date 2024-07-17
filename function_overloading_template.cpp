#include<iostream>
using namespace std;



void sun(int a,int b){
    cout<<"We are in sun function 1"<<endl;
}
template<class T>
void sun(T a){
    cout<<"We are in sun function 2"<<endl;
}



int main(){
    sun(4);
    return 0;
}