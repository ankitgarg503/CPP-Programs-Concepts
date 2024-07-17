#include<iostream>
using namespace std;
void fibonacii(int a,int b)
{
    int s,temp;
    for (int i = 1; i < 40; i++)
    {
        s=a+b;
        if(i==25)
        {
            cout<<endl;
        }
        cout<<s<<" ";
        a=b;
        b=s;

    }
    
   

}
int main(){
    int a=1,b=1;
    cout<<a<<" "<<b<<" ";
    fibonacii(a,b);
    return 0;
}