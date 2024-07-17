#include<iostream>
using namespace std;

void printArray(int A[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    printf("\n");
}
int main(){
    int arr[10]={0,5,7,9,2,3,5};
    int cnt[10]={0};
    int ans[10];
    for(int i=0;i<7;i++){
        cnt[arr[i]]+=1;
    }
    printArray(cnt,10);
    int i=0,j=0;
    while(i<10){
        if(cnt[i]>0){
             ans[j]=i;
             cnt[i]-=1;
             j++;
        }
        else{
            i++;
        }
    }
    cout<<endl;
    printArray(ans,7);

    return 0;
}