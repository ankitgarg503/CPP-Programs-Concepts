#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={11,2,33,4,55,66,7};
    display(arr,7);
    sort(arr,arr+7,greater<int>());
    display(arr,7);
    return 0;
}