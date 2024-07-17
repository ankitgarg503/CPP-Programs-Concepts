#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
void arrayReversal(int arr[],int size){
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    
}
void arrayInsertion(int arr[], int size,int data,int index){
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=data;

}
void arrayDeletion(int arr[], int size,int index){
    for (int i = index; i <size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    

}
int linearSearch(int arr[], int size,int element){
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]==element) {
            return 1;
        }
        // else{
        //     return 0;
        // }
    }
    return 0;
    
}

 int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int arr3[1000];
        for(int i=0;i<n;i++){
            arr3[i]=arr1[i];
            
        }
        for(int i=n;i<m+n;i++){
            arr3[i]=arr2[i-n];
        }
        sort(arr3,arr3+m+n);
        display(arr3,m+n);
        int element;
        element=arr3[k-1];
        
        return element;
    }

    string isSubset(int a1[], int a2[], int n, int m) {
    string s;
    sort(a1,a1+n);
    int count=0;
    sort(a2,a2+m);
    display(a1,n);
    cout<<endl;
    display(a2,m);
    for(int i=0;i<m;i++){
        if(a1[i]==a2[i]){
            count++;
        }
        else{
            s="No";
            return s;
        }
        
    }
    if(count==m){
        s="Yes";
        return s;
    }
    else{
        s="No";
        return s;
    }
    
}


int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(high>=low){
        mid=(high+low)/2;
        if(arr[mid]<element){
            low=mid+1;
        }
        else if(arr[mid]>element){
            high=mid-1;

        }
        else if(arr[mid==element]){
            return 1;
        }
            

    }
    return 0;
}



int main(){
    int arr[10],size,data;
    int arr1[]={11,1,13,21,3,7};
    sort(arr1,arr1+6);
    display(arr1,6);
    int arr2[]={11,3,7,1};
    cout<<endl;
    string s;
     s=isSubset(arr1,arr2,6,4);
    // cout<<s<<endl;
    // int s=kthElement(arr1, arr2,5,4,5);
    // cout<<endl;
    // cout<<s<<endl;
    // cout<<"Enter Size of Array"<<endl;
    // cin>>size;
    // cout<<"Enter array elements"<<endl;
    // for (int i = 0; i <size; i++)
    // {
    //     cin>>arr[i];
    // }
    //  sort(arr1,arr1+6);
    //     display(arr1,6);
    //   arrayReversal(arr,size);  
    //   cout<<endl;
    //   display(arr,size);
    //   cout<<"Enter Which Element You want to insert"<<endl;
    //   cin>>data;
    //    cout<<"Enter Which Element You want search"<<endl;
    //    cin>>data;
    //   arrayInsertion(arr,size,data,2);
    //   size=size+1;
    //   display(arr,size);
    //   arrayDeletion(arr,size,2);
    //   cout<<endl;
    //   size=size-1;
    //   display(arr,size);
    //   if(linearSearch(arr,size,data)){
    //     cout<<"Element is Present in the array"<<endl;
    //   }
    //   else{
    //     cout<<"Element is not Present in the array"<<endl;
    //   }
    //   if(binarySearch(arr,size,data)){
    //     cout<<"Element is Present in the array"<<endl;
    //   }
    //   else{
    //     cout<<"Element is not Present in the array"<<endl;
    //   }

    return 0;
}