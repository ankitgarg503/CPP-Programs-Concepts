#include<iostream>
using namespace std;

int max(int arr[])
{
    int i,max;
    max=arr[0];
    for(i=0;i<7;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}


int min(int arr[])
{
    int i,min;
    min=arr[0];
    for(i=0;i<7;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    int arr[10],i;
    int a=4,b=6;
    cout<<(a>b)<<endl;
    cout<<"Enter Elements of Array:  ";
    for(i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    int maximum=max(arr);
    int minimum=min(arr);
    cout<<"Maximum Element="<<maximum;
    cout<<"\n Minimum Element="<<minimum;
    return 0;
}
