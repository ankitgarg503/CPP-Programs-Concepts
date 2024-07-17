#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int a;
    char c1,c2;
    string s="Ankit";
    string s2="Garg";
    string s3=s+s2;
    cout<<s3<<endl;
    a=s.size();
    c1=s[0];
    c2=s2[0];
    s[0]=c2;
    s2[0]=c1;
    cout<<"The size of string 1="<<a <<endl;
    cout<<"The size of string 1="<<s <<endl;
    cout<<"The size of string 1="<<s2<<endl;
    return 0;
}