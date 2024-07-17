#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int *ptr;
    ptr=arr;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<*(ptr+i)<<" "<<(ptr+i)<<endl;

    }
    return 0;
}