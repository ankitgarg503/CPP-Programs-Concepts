#include<iostream>
using namespace std;
/*
void implementBestFit(int blockSize[],int blocks,int processSize[],int process){
    int allocation[process];
    int occupied[blocks];
    for (int i = 0; i < process; i++)
    {
        allocation[i]=-1;
    }
    for (int i = 0; i < blocks; i++)
    {
         occupied[i]=0;
    }
    
    
    for (int i = 0; i < process; i++)
    {
        int indexPlaced=-1;
        for (int j = 0; j < blocks; j++)
        {
             if(blockSize[j]>=processSize[i] and !occupied[j]){
                     if(indexPlaced==-1){
                        indexPlaced=j;
                     }
                     else if(blockSize[indexPlaced]>blockSize[j]){
                          indexPlaced=j;
                     }
             }
        }
        if(indexPlaced!=-1){
            allocation[i]=indexPlaced;
            occupied[indexPlaced]=1;
        }
        
    }
    printf("Process No \t Process Size \t Block No\n");
    for (int i = 0; i < process; i++)
    {
        cout<<i+1<<"\t \t  "<<processSize[i]<<" \t\t";
        if(allocation[i]!=-1){
            cout<<allocation[i]+1;
        }
        else{
            cout<<"Not Allocated";
        }
        cout<<endl;
    }
    
    
}

*/
void implementBestFit(int blockSize[],int blocks,int processSize[],int process){
    int occupied[10];
    int allocation[10];
    for (int i = 0; i < blocks; i++)
    {
        occupied[i]=0;
    }
    for (int i = 0; i < process; i++)
    {
        allocation[i]=-1;
    }
    for (int i = 0; i < process; i++)
    {
        int indexPlaced=-1;
        for (int j = 0; j < blocks; j++)
        {
             if(blockSize[j]>=processSize[i] and !occupied[j]){
                if(indexPlaced==-1){
                    indexPlaced=j;
                }
                else{
                    if(blockSize[indexPlaced]>blockSize[j]){
                        indexPlaced=j;
                    }
                }
             }
        }
        if(indexPlaced!=-1){
            allocation[i]=indexPlaced;
            occupied[indexPlaced]=1;
       }
        
    }

    printf("Process No \t Process Size \t Block No\n");
    for (int i = 0; i < process; i++)
    {
        cout<<i+1<<"\t \t  "<<processSize[i]<<" \t\t";
        if(allocation[i]!=-1){
            cout<<allocation[i]+1;
        }
        else{
            cout<<"Not Allocated";
        }
        cout<<endl;
    }
    
    
}



/*
void implementBestFit(int blockSize[], int blocks,int processSize[],int process){
    int alocation[process];
    int occupied[blocks];
    for (int i = 0; i < process; i++)
    {
        alocation[i]=-1;
    }
    for (int i = 0; i < blocks; i++)
    {
        occupied[i]=0;
    }
    for (int i = 0; i < process; i++)
    {
         int indexPlaced=-1;
         for (int j = 0; j < blocks; j++)
         {
             if(blockSize[j]>=processSize[i] and occupied[j]==0){
                if(indexPlaced==-1){
                    indexPlaced=j;
                }
                else if(blockSize[j]<blockSize[indexPlaced]){
                    indexPlaced=j;
                }
             }
         }
         if(indexPlaced!=-1){
            alocation[i]=indexPlaced;
            occupied[indexPlaced]=1;
         }
         
    }
    printf("\n Process No \t Process Size  \t Block No\n");
    for (int i = 0; i < process; i++)
    {
        printf("%d\t\t   %d\t\t",i+1,processSize[i]);
        if(alocation[i]!=-1){
            printf("%d \n ",alocation[i]+1);
        }
        else{
            printf("Not Allocated\n");
        }
    }    
    
}

*/

int main(){
    int blockSize[]={100,50,30,120,35};
    int processSize[]={40,10,30,60};
    int blocks=5;
    int process=4;
    implementBestFit(blockSize,blocks,processSize,process);
    return 0;
}