#include<iostream>
using namespace std;


bool solve(int a[],int sum,int part,int k,bool vis[],int index,int n){
        if(k==0) return true;
        if(sum>part) return false;
        if(sum==part) {
            return solve(a,0,part,k-1,vis,0,n);
        }
        
        for(int i=index;i<n;i++){
            if(vis[i]) continue;            
            vis[i]=true;
            if(solve(a,sum+a[i],part,k,vis,i+1,n)) return true;            
            vis[i]=false;
        }
        return false;
    }
    bool isKPartitionPossible(int a[], int n, int k){
         int sum = 0;
         for(int i=0;i<n;i++){
             sum+=a[i];
         }         
         if(sum%k!=0) return false;         
         bool vis[n] = {false}; // to find unique subsets !!!         
         return solve(a,0,sum/k,k,vis,0,n);
    }

int main(){
    int arr[]={2,1,5,55656,4};
    cout<< isKPartitionPossible(arr,5, 3);
   
    return 0;
}