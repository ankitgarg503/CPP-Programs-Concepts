#include<iostream>
#include<bits/stdc++.h>
using namespace std;



bool arrayContinuous(int arr[],int n){
     sort(arr,arr+n);
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     
	      for(int i=0;i<n;i++){
	          if(arr[i]!=arr[i+1] && arr[i]+1!=arr[i+1]){
	              return false;
	          }
	         
	      }
	     return true; 
}


int main(){
    int arr[11]={2,1,3,4,10,6,5,7,5,8,9};
    bool ans;
    ans=arrayContinuous(arr,11);
    cout<<ans<<endl;
    return 0;
}