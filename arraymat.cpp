#include <iostream>
using namespace std;

class Matrix
{
    int mat1[3][3], i, j, mat2[3][3], add[3][3], mul[3][3], sum = 0, k,tra[3][3];

public:
    void getMat1(void)
    {
         printf("Enter Elements of First Matrix:");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
    }
    void getMat2(void)
    {
         printf("Enter Elements of second Matrix:");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
    }
    void matAdd(void)
    {

        // printf("\n Addition of 2 matrix Given Below:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                sum=mat1[i][j] + mat2[i][j];
                add[i][j]=sum;
            }
            // printf("\n");
        }
    }
    void matTranspose(void)
    {
        // printf("\n Transpose of a Matrix Given Below\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                tra[i][j] = mat1[j][i];
                // printf("%d\t", mat2[i][j]);
            }
            // printf("\n");
        }
    }
    void matMul(void)
    {
        // printf("\n Multiplication of 2 matrix Given Below:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                 sum=0;
                for (k = 0; k < 3; k++)
                {
                    sum = sum + mat1[i][k] * mat2[k][j];
                    mul[i][j] = sum;
                }

                // printf("%d\t",mat1[i][j]+mat2[i][j]);
            }
        }
    }
    void display_matrix(void)
    {
        cout<<"Matrix 1 Given Below"<<endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", mat1[i][j]);
            }
            printf("\n");
        }
      cout<<"Matrix 2 Given Below"<<endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", mat2[i][j]);
            }
            printf("\n");
        }
      cout<<"Sum of 2 Matrix Given Below"<<endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", add[i][j]);
            }
            printf("\n");
        }
        cout<<"Multiplication of 2 matrix Given Below"<<endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    cout<<"Transpose of 2 Matrix  Given Below"<<endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", tra[i][j]);
            }
            printf("\n");
        }
    }
};

int main()
{
    Matrix m1;
    m1.getMat1();
    m1.getMat2();
    m1.matAdd();
    m1.matTranspose();
    m1.matMul();
    m1.display_matrix();

    return 0;
}