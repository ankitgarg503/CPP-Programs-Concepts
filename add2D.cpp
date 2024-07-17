#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3],mat2[3][3],i,j;
    cout<<"Enter 9 Elements for First Matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat1[i][j];
        }
    }
       cout<<"Enter 9 Elements for Second Matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat2[i][j];
        }
    }
    cout<<"\n First Matrix Given Below\n";
       //cout<<"Enter 9 Elements for First Matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\n Second  Matrix Given Below\n";
       //cout<<"Enter 9 Elements for First Matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n Sum of 2 Matrix Given Below\n";
     for ( i = 0; i < 3; i++)
     {
        for( j = 0; j < 3; j++)
        {
            cout<<mat1[i][j]+mat2[i][j]<<" ";

        }
        cout<<endl;
        
     }

    

 
}