#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Process"<<endl;
    cin>>n;
    int AT[n],BT[n],CT[n],TAT[n],WT[n];
    for (int i = 0; i < n; i++)
    {
         printf("Enter Arrival time of %d process ",i+1);
         cin>>AT[i];
         printf("Enter Burst time of %d process ",i+1);
         cin>>BT[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
             if(BT[i]>BT[j]){
                swap(BT[i],BT[j]);
             }
        }
        
    }
    
    CT[0]=BT[0];
    for (int i = 1; i < n; i++)
    {
         CT[i]=BT[i] + CT[i-1];  
    }
    for (int i = 0; i < n; i++)
    {
         TAT[i]=CT[i]-AT[i];
         WT[i]=TAT[i]-BT[i];
    }
    printf("Pid\t AT\t BT\t CT\t TAT\t WT\t\n");
    for (int i = 0; i < n; i++)
    {
         cout<<i<<"\t"<<AT[i]<<"\t"<<BT[i]<<"\t"<<CT[i]<<"\t"<<TAT[i]<<"\t"<<WT[i]<<endl;
    }
    
    
    
    
    return 0;
}