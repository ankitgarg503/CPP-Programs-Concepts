#include<iostream>
using namespace std;



 int minOperations(int *a,int n)
    {
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<a[i+1]){
                a[i+1]=a[i+1]-1;
                count++;
                i--;
            }
        }
        return count;
    }
int main(){
    int arr[]={11,2,3,2,2,2};
    int p=minOperations(arr,6);
    cout<<p;   
    return 0;
}