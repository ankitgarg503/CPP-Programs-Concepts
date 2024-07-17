#include<iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
   }
   cout<<endl;
}

void selectionSort(int arr[],int n){
    int swaps=0;
    for (int i = 0; i < n; i++)
    {
        int miniIndex=i;
        for (int j = i+1; j <n; j++)
        {
            if(arr[miniIndex]>arr[j]){
                miniIndex=j;
            }
        }
        printArray(arr,n);
        if(i!=miniIndex){
            swap(arr[miniIndex],arr[i]);
            swaps++;
        }
        
    }
    cout<<"swaps: "<<swaps<<endl;
    
}

int main(){
    int arr[]={8,3,2,9,5,6,2};
    printArray(arr,7);
    cout<<" ***** ***** **** ***"<<endl;
    selectionSort(arr,7);
    cout<<" ***** ***** **** ***"<<endl;
    printArray(arr,7);

    return 0;
}