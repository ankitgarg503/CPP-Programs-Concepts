#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3],mat2[3][3],i,j,count=0;
    cout<<"Enter 9 Elements for First Matrix  ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"\nEnter Matrix is Given Below\n ";
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        
        cout<<"\n";

    }

       cout<<"\nTranspose of a Given Matrix\n ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat2[i][j]=mat1[j][i];
        }
        
    }
   // cout<<"\nEnter Matrix is Given Below\n ";
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        
        cout<<"\n";


    }
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        if (mat1[i][j]==mat2[i][j])
        {
            count++;
        }
        
    }
    
    }
    if (count==9)
    {
        cout<<"\nMatrix is Symmetric \n"<<count;

    }
    else{
        cout<<"\nMatrix is Not Symmetric \n"<<count;

    }
    exit(0);
        

}