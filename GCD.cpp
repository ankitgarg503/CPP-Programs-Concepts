#include<iostream>
using namespace std;

int GCD(int x, int y){
    if(x==y){
        return x;
    }
    if(x%y==0){
        return y;
    }
    if(y%x==0){
        return x;
    }
    if(x>y){
        return (GCD(x%y,y));
    }
    if(x<y){
        return (GCD(y%x,x));;
    }

}


int main(){
    int a,b;
    cout<<"Enter two Numbers"<<endl;
    cin >>a>>b;
    int s=GCD(a,b);    
    cout<<"Greatest Common Divisior ="<<s<<endl;
    return 0;
}