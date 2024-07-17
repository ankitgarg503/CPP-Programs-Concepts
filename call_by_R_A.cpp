#include<iostream>
using namespace std;

 int inline  swap1(int *x, int *y){
    int temp = *x;
   * x = *y;
   * y = temp;

 }
 int   swap2(int *x, int *y){
    int temp = *x;
   * x = *y;
   * y = temp;

 }
int main(){
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Actual value of a:"<<a<<" b:"<<b<<endl;
    swap1(&a,&b);
     cout<<"value of a:"<<a<<" b:"<<b<<endl;
    swap2(&a,&b);
     cout<<"value of a:"<<a<<" b:"<<b<<endl;
    return 0;
}