#include<iostream>
#include<bits/stdc++.h>
using namespace std;





int main(){

    map<int,string>m;
    m[0]="Ankit";
    m[1]="Nitya";
    m[2]="Nityankit";
    map<int,string>::iterator it;
    it=m.begin();
    auto it2=m.find(1);
    cout<<it2->first<<" "<<it2->second<<endl;
    cout<<"MAps"<<endl;
    for ( it ; it !=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    

    return 0;
}