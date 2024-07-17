#include<iostream>
using namespace std;
int main()
{
    int arr[20],size,j,i;
    cout<<"Enter Number of Elements:  ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   cout<<"\nArray Before Sorting\n";
   for(i=0;i<size;i++)
   {
    cout<<arr[i]<<"  ";
   }
   cout<<"\n Array After Sorting\n";
   for(i=0;i<size;i++)
   {
    for(j=i+1;j<size+1;j++)
    {
       if(arr[i]>arr[j])
       {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }       
    }
   }
  for(i=0;i<size;i++)
   {
    cout<<arr[i]<<"  ";
   }
}