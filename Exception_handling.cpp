#include<iostream>
using namespace std;

int divP(int a, int b){
    if(b==0){
        throw 5;
    }
    return a/b;
}

int main(){
    int a,b;
    cout<<"Enter 2 numbrs"<<endl;
    cin>>a>>b;
    try
    {
        cout<<"we are in try "<<endl;
        int c=divP(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Exception Occure  "<<e<<endl;
    }
    
   cout<<"End of the program; "<<endl;

    return 0;
}