#include<iostream>
using namespace std;

 int fib(int i)
 {
     if(i<=2)
     {
        return 1;
     }
     else {
         return fib(i-1)+fib(i-2);
     }
 }

int fibonacci(int n) {
    if (n == 1) return 1;
    if (n == 2) return 1;
    int prevPrev = 1;
    int prev = 1;
    int currentNumber;
    for (int i = 2; i < n; i++) {
        currentNumber = prevPrev + prev;
        prevPrev = prev;
        prev = currentNumber;
    } 
    return currentNumber;
}


int main(){
    int a=48;
    // cout<<"Enter Value of a="<<endl;
    // cin>>a;
   cout<<"Nth term of Fibonacci Sequence="<<fibonacci(a)<<endl;
    cout<<"Nth term of Fibonacci Sequence="<<fib(a)<<endl;
    return 0;
}
