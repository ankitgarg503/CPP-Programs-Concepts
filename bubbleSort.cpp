#include<iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
   }
   cout<<endl;
}

void bubbleSort(int arr[],int n){
    int swaps=0;
    int noSort=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
                noSort=1;
            }
        }
        if(!noSort) break;
           printArray(arr,n);
    }
    
    cout<<"swaps: "<<swaps<<endl;
    
}

int main(){
    int arr[]={8,3,2,9,5,6,2};
    printArray(arr,7);
    cout<<" ***** ***** **** ***"<<endl;
    bubbleSort(arr,7);
    cout<<" ***** ***** **** ***"<<endl;
    printArray(arr,7);

    return 0;
}