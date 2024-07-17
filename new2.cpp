#include <iostream>
using namespace std;

class Dynamic
{
    int *arr;

public:
    void createArray(void)
    {

        arr = new int[100];
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }
    void Display(void)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << "\t";
        }
    }
    void MAxMin(void)
    {

        int max = arr[0];
        int min = arr[0];

        for (int i = 0; i < 10; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        printf("MAximum Element of an array=%d\n", max);
        printf("Minimum Element of an array=%d\n", min);
    }

    void sortArray(void)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

int main()
{
    cout << "Dynamic MEmeory Allocate to Array" << endl;
    Dynamic d1;
    d1.createArray();
    d1.Display();
    d1.MAxMin();
    d1.sortArray();
    d1.Display();

    // int *arr;
    // arr = new int[100];
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << "\t";
    // }

    // int max = arr[0];
    // int min = arr[0];

    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }
    // printf("MAximum Element of an array=%d\n", max);
    // printf("Minimum Element of an array=%d\n", min);

    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = i + 1; j < 10; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             int temp;
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << "\t";
    // }

    // printf("\nMAximum Element of an array=%d\n", arr[9]);
    // printf("Minimum Element of an array=%d\n", arr[0]);

    // delete[] arr;

    return 0;
}