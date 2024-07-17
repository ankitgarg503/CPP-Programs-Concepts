#include<iostream>
using namespace std;

inline int Greater(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    
    int c=Greater(a,b);
    cout<<"Gretest no is ="<<c;
    return 0;
}