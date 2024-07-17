#include<iostream>
using namespace std;



float change (int a,int b)
{
   static int c=4;
   c=c+1;
   return a*b+c;
}
int main(){
    int a=3,b=5;

    float c=change(a,b);
    cout<<"The Value of c="<<c;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
     c=change(a,b);
    cout<<"The Value of c="<<c<<endl;
    return 0;
}