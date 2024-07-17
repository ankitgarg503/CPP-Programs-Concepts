#include<iostream>
using namespace std;

int fib(int n){
    if( n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


int main(){
    int n;
    cout<<"Enter how many term you want to print :"<<endl;
    cin >> n;
      for (int i = 0; i < n; i++)
      {
            int ans=fib(i);
            cout<<ans<<"   ";
        /* code */
      }
      
    return 0;
}