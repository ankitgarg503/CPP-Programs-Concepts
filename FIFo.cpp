#include<iostream>
using namespace std;
int main(){
    int ref[8];
    int pages,frames,pageFault=0;
    cout<<"Enter no of pages: "<<endl;
    cin>>pages;
    for (int i = 0; i < pages; i++)
    {
         int p;
         cout<<"Enter Value No: ["<<i+1<<"]"<<endl;
         cin>>p;
         ref[i]=p;
    }
    printf("Enter no of frames ");
    cin>>frames;
    int temp[frames];
    for (int i = 0; i < frames; i++)
    {
        temp[i]=-1;
    }
    for (int i = 0; i < pages; i++)
    {
        int s=0;
         for (int j = 0; j < frames; j++)
         {
             if(ref[i]==temp[j]){
                s++;
                pageFault--;
             }
         }
         pageFault++;
         if(pageFault<=frames and s==0){
            temp[i]=ref[i];
         }
         else if(s==0){
            temp[(pageFault-1)%frames]=ref[i];
         }
         printf("\n");
         for (int i = 0; i < frames; i++)
         {
            cout<<"\t "<<temp[i];
         }
    }
    cout<<"\n Total no of pageFault="<<pageFault<<endl;         
    return 0;
}