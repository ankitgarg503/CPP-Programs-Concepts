#include<iostream>
#include<bits\stdc++.h>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++)
   {
    cout<<arr[i]<<"  ";
   }
}


int main(){
    int arr[]={543,22,3,44,55,6};
    int arr1[]={131,22,3,344,455,6};
    int arr2[10];
    vector<int>v;
    display(arr,6);
    cout<<endl;
    display(arr1,6);
    sort(arr,arr+6);
    sort(arr1,arr1+6);
    cout<<endl;
    display(arr,6);
    cout<<endl;
    display(arr1,6);
   set<int>s;
   for(int i=0;i<6;i++){
    s.insert(arr[i]);
   }
  
//    for(int i=0;i<6;i++){
//     s.insert(arr1[i]);
//    }
   auto p=s.begin();
  int count=0;
   for(int i=0;i<6;i++){
    
    if(s.find(arr1[i])!=s.end()){
        int element;
        element=*p;
        p++;
        v.push_back(element);
        count++;
        
        s.erase(arr1[i]);

    }
    
   }
   cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
      
    }
   cout<<endl;
//    cout<<"Union of two array contains  "<<s.size()<<"  Elements"<<endl;
   cout<<"Intersection of  two array contains  "<<count<<"  Elements"<<endl;
//    auto p=s.begin();
//    for(int i=0; i<s.size();i++){
//     cout<<*p<<"  ";
//     p++;
//    }
   


    return 0;
}