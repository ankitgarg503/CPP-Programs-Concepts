#include<iostream>
using namespace std;
int main(){
     // P0, P1, P2, P3, P4 are the Process names here  
  
    int n, m, i, j, k;  
    n = 3;                         // Number of processes  
    m = 3;                         // Number of resources  
     
    int alloc[n][3] = {{0, 1, 0},  // P0 // Allocation Matrix  
                       {2, 0, 0},  // P1  
                       {3, 0, 2}};
                  
    int max[n][3] = {{7, 5, 3},  // P0 // MAX Matrix  
                     {3, 2, 2},  // P1  
                     {9, 0, 2}}; 
  
    int avail[3] = {13, 23, 2}; // Available Resources  
    int need[5][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            need[i][j]=max[i][j]-alloc[i][j];
        }
        
    }
    int finish[5];
    int ans[5];
    int index=0;
    for (int i = 0; i < 3; i++)
    {
        finish[i]=0;
    }
    
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if(finish[i]==0){
                int flag=0;
                for (int j = 0; j < m; j++)
                {
                    if(need[i][j]>avail[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans[index++]=i;
                    for (int m = 0; m < 3; m++)
                    {
                        avail[m]+=alloc[i][m];
                    }
                    finish[i]=1;
                }
                
            }
        }
        
    }
    int flag=1;
    for (int i = 0; i < 3; i++)
    {
        if(finish[i]==0){
            cout<<"Sequence is not Safe"<<endl;
            flag=0;
            break;
        }
    }
    if(flag){
        for (int i = 0; i < 2; i++)
        {
            cout<<"P"<<ans[i]<<"-->";
        }
        cout<<"P"<<ans[2]<<endl;
    }
    
    
    return 0;
}