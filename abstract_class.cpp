#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#include <iostream>
#include <unordered_map>
#include <vector>
#include<string>
#include <algorithm>

int main(){
    int ans=0;
    string word="ankit";
      unordered_map<char,int> mp;
        for(char it:word){
            mp[it]=mp[it]+1;
        }
        for(auto it :mp){
            cout<<it.first<<"-->"<<it.second;
            cout<<endl;
        }
}





/*
class A  //Abstract class
{
     public:
     void virtual fuel_capacity(void)=0;//pure virtual function
     void tyre_name(void){
        cout<<"\nMRF tyres using"<<endl;
     }

};
class B:public A{
    public:
    void fuel_capacity(void){
        cout<<"\n full_capacity=10 litre"<<endl;
    }
    void engine(void){
        cout<<"Engine of car b is rc7";
    }

};

int main(){
   // A ptr=new A;
    A *ptr;
    ptr->tyre_name();
    B obj1;
    obj1.engine();
    obj1.fuel_capacity();
   // A obj2;
    
    return 0;
}*/