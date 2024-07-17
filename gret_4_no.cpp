#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"This Program is Going to Check Second Greatest Number\n";
    if(a>b && a>c && a>d)
    {
        //cout<<"The Greatest Number is "<<a<<endl;
        if(b>c && b>d)
        {
            cout<<"The Second Greatest Number is "<<b<<endl;
        }
        else
        if (c>b && c>d)
        {
            cout<<"The Second Greatest Number is "<<c<<endl;

        }
        else{
            cout<<"The Second Greatest Number is "<<d<<endl;

        }
        

    }
    else if(b>c && b>d)
        {
            if(a>c && a>d)
        {
            cout<<"The Second Greatest Number is "<<a<<endl;
        }
        else
        if (c>a && c>d)
        {
            cout<<"The Second Greatest Number is "<<c<<endl;

        }
        else{
            cout<<"The Second Greatest Number is "<<d<<endl;

        }

        }
        else if(c>d)
            {
                 if(a>b && a>d)
        {
            cout<<"The Second Greatest Number is "<<a<<endl;
        }
        else
        if (b>a && b>d)
        {
            cout<<"The Second Greatest Number is "<<b<<endl;

        }
        else{
            cout<<"The Second Greatest Number is "<<d<<endl;

        }


            }
            else{
                 if(b>c && b>a)
        {
            cout<<"The Second Greatest Number is "<<b<<endl;
        }
        else
        if (a>b && a>d)
        {
            cout<<"The Second Greatest Number is "<<a<<endl;

        }
        else{
            cout<<"The Second Greatest Number is "<<c<<endl;

        }


            }

    return 0;
}