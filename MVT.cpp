#include<iostream>
using namespace std;
int main(){
    int totalM,os,noPages,t[15];
    cout<<"Enter Total memory"<<endl;
    cin>>totalM;
    cout<<"Enter how much memory OS required"<<endl;
    cin>>os;
    totalM=totalM-os;
    cout<<"Enter no pages required"<<endl;
    cin>>noPages;
    for (int i = 0; i < noPages; i++){
        int num;
        cout<<"Enter memory required for "<<i+1<<" pages"<<endl;
        cin>>num;
        t[i]=num;
    }
    for (int i = 0; i < noPages; i++)
    {
         if(totalM>=t[i]){
             cout<<i+1<<" Page is Allocated"<<endl;
             totalM-=t[i];
         }
         else{
            cout<<i+1<<" Page is Not Allocated Due to insufficient memory"<<endl;
         }
    }
      printf("External Framentation =%d",totalM);


    return 0;
}