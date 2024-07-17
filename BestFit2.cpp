#include<iostream>
using namespace std;

void bestFit(int processSize[],int blockSize[],int process,int blocks){
    int allocated[process];
    int occupied[blocks];
    for (int i = 0; i < process; i++)
    {
        allocated[i] = -1;
        occupied[i] = 0;
    }
    for (int i = 0; i < process; i++)
    {
        int indexPlaced=-1;
        for (int j = 0; j < blocks; j++)
        {
             if(processSize[i]<=blockSize[j] and !occupied[j]){
                  if(indexPlaced==-1){
                    indexPlaced = j;
                  }
                  else{
                    if(blockSize[j]<blockSize[indexPlaced]){
                        indexPlaced=j;
                    }
                  }
             }

        }
        if(indexPlaced!=-1){
            allocated[i]=indexPlaced;
            occupied[indexPlaced]=1;
        }
        
    }
    printf("Process No \t ProcessSize \t Block No\n");
    for (int i = 0; i < process; i++)
    {
         cout<<i+1<<"\t\t"<<processSize[i];
         if(allocated[i]!=-1){
            cout<<"\t\t"<<allocated[i]+1;
         }
         else{
            cout<<"\t\tNot Allocated";
         }
         cout<<endl;
    }
    
    

    
}

int main(){
    int prcessSize[6]={10,58,117,92,88};
    int blockSize[6]={100,30,60,90,120};
    int process=5;
    int blocks=5;
    bestFit(prcessSize,blockSize,process,blocks);
    return 0;
}