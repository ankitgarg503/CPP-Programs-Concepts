#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="Ankit Garg";
     string name2;
     name2=name;
    //  name.append(name2);
    // cout << name2 << endl;

    // cout << name << endl;
    name.insert(5,"Nitya");
    name2.replace(0,3,"Sharad");
    cout << name << endl;
    cout << name2 << endl;
    name2.erase(0,5);
    cout << name2 << endl;
    cout<<name.find("Ntaya");
    return 0;
}