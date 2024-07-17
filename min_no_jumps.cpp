#include<iostream>
using namespace std;

int minJumps(int arr[], int n){
        int count=0,a,i=0;
        if(arr[i]==0 && i<n){
            return -1;
        }
        else {
            while(i<n){
                a=arr[i];
                i=i+a;
                count++;
                if(i>n-i){
                    break;
                }
                
            }
            
        }
        return count;
    }




int main(){
    int arr[10],size,data;
    int arr1[]={1, 3, 5, 8, 9, 2, 6, 9} ;
    int s=minJumps(arr1,8);
    cout<<s<<endl;
    return 0;
}




 