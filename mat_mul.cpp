#include <iostream>
using namespace std;
int main()
{
    int mat1[3][3], i, j, mat2[3][3], add[3][3], mul[3][3], sum = 0, k;
    printf("Enter Elements of First Matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter Elements of Second Matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n Enter Matrix Given Below:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n Addition of 2 matrix Given Below:\n");
  	for(i=0;i<3;i++)
 {
		for(j=0;j<3;j++)
	{
		printf("%d\t",mat1[i][j]+mat2[i][j]);
    }
    printf("\n");
 }


 printf("\n Transpose of a Matrix Given Below\n");
 	for(i=0;i<3;i++)
 {
		for(j=0;j<3;j++)
	{
		mul[i][j]=mat1[j][i];
		printf("%d\t",mul[i][j]);
    }
    printf("\n");
 }
 
 

  cout<<"Matrix Multiplication Given Below"<<endl;
   for (int i = 0; i < 3; i++)
   {
    //    sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum=0;
            for(int k = 0; k < 3; k++){
               sum=sum+mat1[i][k]*mat2[k][j];
               mul[i][j]=sum;
            }
        }
        
   }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
   

    return 0;
}