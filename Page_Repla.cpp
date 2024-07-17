#include<iostream>
using namespace std;
int main(){
    int ref[10];
    int frames[10];
    int noPages=0;
    int noFrames=0;
    int pageFault=0;
    int s=0;
    cout<<"Enter no of Pages:"<<endl;
    cin>>noPages;
    
    cout<<"Enter no of Frames:"<<endl;
    cin>>noFrames;
    for (int i = 0; i < noPages; i++)
    {
        int temp;
        cin>>temp;
        ref[i]=temp;
    }
    for (int i = 0; i < noFrames; i++)
    {
        frames[i]=-1;
    }
    
    for (int i = 0; i < noPages; i++)
    {
        s=0;
        for (int j = 0; j < noFrames; j++)
        {
            if(ref[i]==frames[j]){
                s++;
                pageFault--;
            }
        }
        pageFault++;
        if(s==0 and pageFault<=noFrames){
            frames[i]=ref[i];
        }
        else if(s==0){
            frames[(pageFault-1)%noFrames]=ref[i];
        }
        cout<<endl;
        for (int i = 0; i < noFrames; i++)
        {
            cout<<frames[i]<<"    ";
        }

        
    }
    cout<<"\nTotal no Of Page Fault="<<pageFault<<endl;


    return 0;
}