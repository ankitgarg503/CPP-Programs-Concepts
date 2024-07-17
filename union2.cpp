#include<iostream>
using namespace std;
typedef   union Shop
{
    int tofee;
    float rice;
    char pipe;
}t1;

int main(){
    t1 s1;
    s1.pipe='R';
   // cout<<s1.pipe;
    s1.tofee=10;
   // cout<<s1.pipe;
    //cout<<s1.rice;
    s1.rice=10.00;
    //cout<<s1.pipe;
    typedef int i;
    i x=5;
    cout<<x;
    
    
    cout<<s1.pipe<<endl;
    cout<<s1.rice<<endl;
    cout<<s1.tofee<<endl;

    
    
    
    return 0;
}