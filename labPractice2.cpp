#include<string>
#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
   }
    cout<<endl;
}



// Selection Sort
void selectionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        if(i!=minIndex){
            swap(arr[minIndex],arr[i]);
        }
        
    }
    
}


// Insertion Sort

void insertionSort(int arr[],int n){
    int i,j;
    for ( i = 1; i < n; i++)
    {
        int ele=arr[i];
        for ( j = i-1; j >=0 and arr[j]>ele; j--)
        {
           arr[j+1]=arr[j];
        }
        arr[j+1]=ele;
        
    }
    
}




// Bubble sort

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}

// linear search

bool linearSearch(int arr[],int n,int ele){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==ele){
            return true;
        }
    }
    return false;
    
}
// binary search

 bool binarySearch(int arr[],int n,int ele){
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        while(low<=high){
             mid=(low+high)/2;
             if(arr[mid]==ele){
                return true;
             }
             else if(arr[mid]>ele){
                high=mid-1;
             }
             else{
                low=mid+1;
             }
        }
        return false;
 }

int main(){
    int arr[10];
    int n;
    cout<<"Enter total number of elements: ";
    cin>>n;
    for (int i = 0; i <n; i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    // int ele;
    // cout<<"Enter element to be searched: ";
    // cin>>ele;
    // if(binarySearch(arr,n,ele)){
    //     cout<<"Element found: Congratulations "<<endl;
    // }
    // else{
    //     cout<<"Element not found: Sorry "<<endl;
    // }


    // if(linearSearch(arr,n,ele)){
    //     cout<<"Element found: Congratulations "<<endl;
    // }
    // else{
    //     cout<<"Element not found: Sorry "<<endl;
    // }

    //  bubbleSort(arr,n);
      //insertionSort(arr,n);
      selectionSort(arr,n);
     printArray(arr,n);

}


// Revsere an array

// int main(){
//     int arr[10];
//     int n;
//     cout<<"Enter total number of elements: ";
//     cin>>n;
//     for (int i = 0; i <n; i++){
//         cin>>arr[i];
//     }
//     printArray(arr,n);
//     for(int i=0;i<n/2;i++){
//         swap(arr[i],arr[n-i-1]);
//     }
//     printArray(arr,n);
// }





// Reverse a string 

// int main(){
//     string s1;
//     cout<<"Enter one string:"<<endl;
//     cin>>s1;
//     cout<<s1<<endl;
//     int n=s1.length();
//     for(int i=0;i<s1.length()/2;i++){
//         swap(s1[i],s1[n-i-1]);
//     }
//     cout<<s1<<endl;
//     return 0;
// }