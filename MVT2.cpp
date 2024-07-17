#include<iostream>
using namespace std;
int main(){
    int totalM=0,nPages,pages[10];
    cout<<"Enter Total memory:";
    cin>>totalM;
    int os=0;
    cout<<"Enter OS memory required:";
    cin>>os;
    totalM-=os;
    printf("Enter How many pages you want to allocate: ");
    cin>>nPages;
    for (int i = 0; i < nPages; i++)
    {
        int t;
        cout<<"Enter memory for "<<i+1<<" PAge"<<endl;
        cin>>t;
        pages[i]=t;
    }
    
    for (int i = 0; i < nPages; i++)
    {
        
        if(totalM>pages[i]){
             totalM-=pages[i];
             cout<<i+1<<"PAge is Allocated";
        }
        else{
               cout<<i+1<<"PAge is not Allocated due to insuuficient memory"<<endl;
        }
        cout<<endl;
    }
    cout<<"\n Total External Fragementation="<<totalM<<endl;
    return 0;
}