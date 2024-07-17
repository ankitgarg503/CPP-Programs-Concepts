#include<iostream>
#include<math.h>
using namespace std;


class Calculator{
    protected:
    int a,b;
    public:
    void getData(int m,int n){
      a=m;
      b=n;
    }
    float show(int choice){
        switch (choice)

        
        {
        case 1:
            return a+b;
            break;
        case 2:
            return a-b;
            break;
        case 3:
            return a*b;
            break;
        case 4:
            return a/b;
            break;
        
        default:
           return 0;
            break;
        }

    }
};

class ScentificCalculator : public Calculator
{
    public:
    int m;
    void get(int s){
        m=s;
    }
    float display(int choice){
        switch (choice)
        {
        case 1:
            return sin(m);
            break;
        
        case 2:
            return cos(m);
            break;
        
        case 3:
            return tan(m);
            break;
        
        case 4:
            return sqrt(m);
            break;
        
        default:
            break;
        }
     }
    

};


int main(){

    ScentificCalculator s1;
    while(1){
    int x;
    cout<<"Press 1 for Using Simple Calculation"<<endl;
    cout<<"Press 2 for Using Scientific Calculation"<<endl;
    cout<<"Press 3 for EXIT"<<endl;
    cin>>x;
    if (x==1)
    {
        cout<<"Enter 2 numbers for calculating the result"<<endl;
        int y,z;
        cin>>y>>z;
        s1.getData(y,z);
        int ch;
        cout<<"press 1 For Addition"<<endl;
        cout<<"press 2 For Subtraction"<<endl;
        cout<<"press 3 For Multiplication"<<endl;
        cout<<"press 4 For Divison"<<endl;
        cin>>ch;
        float ans;
        ans=s1.show(ch);
        cout<<ans<<endl;
    }
    else
    if(x==2){
        cout<<"Enter 1 numbers for calculating the result"<<endl;
        int y;
        cin>>y;
        s1.get(y);
        int ch;
        cout<<"press 1 For Calculation Sin() value"<<endl;
        cout<<"press 2 For Calculation Cos() value"<<endl;
        cout<<"press 3 For Calculation Tan() value"<<endl;
        cout<<"press 4 For Calculation sqrt() value"<<endl;
        cin>>ch;
        float ans;

        ans=s1.display(ch);
        cout<<ans<<endl;
    }
    if(x==3){
        exit(0);
    }
    
    } 
    return 0;
}