#include<iostream>
using namespace std;
int main(){
    int n=5;
    int alloc[n][3] = {{0, 1, 0},  // P0 // Allocation Matrix  
                       {2, 0, 0},  // P1  
                       {3, 0, 2}};
                  
    int max[n][3] = {{7, 5, 3},  // P0 // MAX Matrix  
                     {3, 2, 2},  // P1  
                     {9, 0, 2}}; 
                 
  
    int avail[3] = {5, 6, 2}; // Available Resources  
    int need[n][3];
    int finish[n];
    int ans[n];
    int index=0;
    for (int i = 0; i < n; i++)
    {
        finish[i] =0;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
             need[i][j] = max[i][j]-alloc[i][j];
        }
        
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            
            if(finish[i]==0){
                int flag=0;
                for (int j = 0; j < 3; j++)
                {
                    
                    if(need[i][j]>avail[j]){
                        flag=1;
                        break;
                    }
                }
                 if(flag==0){
                    finish[i]=1;
                    ans[index++]=i;
                    for (int y = 0; y < 3; y++)
                    {
                        avail[y]+=alloc[i][y];
                    }
                    
                 }
            } 
           
            
        }
        
    }
    int flag2=1;
    for (int i = 0; i <n; i++)
    {
        if(finish[i]==0){
            cout<<"System is not in Safe  Mode"<<endl;
            flag2=0;
            break;
        }
    }
    if(flag2==1){
        for (int i = 0; i < 4; i++)
        {
            cout<<"P"<<ans[i]<<"-->";
        }
        cout<<"P"<<ans[4]<<endl;
        
    }
    
    
    
    return 0;
}