#include<iostream>
using namespace std;
int main(){
    int *arr=new int[4];
    arr[0]=11;
    arr[1]=22;
    arr[2]=33;
    arr[3]=44;
    for (int i = 0; i <4; i++)
    {
        cout<<"The value at index="<<i<<"  is="<<arr[i]<<endl;
    }
    delete  []arr;
    cout<<arr[2]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[3]<<endl;
    

    return 0;
}