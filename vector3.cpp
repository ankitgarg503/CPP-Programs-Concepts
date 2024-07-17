#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void display(vector<int> v1){
    // v1.pop_back();
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<"\t"<<v1[i];
    }
    
    

}

int main(){
    vector<int> v3{22,3,44,5,6,1};
    sort(v3.begin(),v3.end());
    display(v3);
    cout<<endl;


    vector<int> v1;
    vector<int> v2{10,20,30};
    vector<int>:: iterator it;
    it=v1.begin();
    int element;
    for (int i = 0; i < 5; i++)
    {
        cin>>element;
        v1.push_back(element);
    }
    
    display( v1);
    
    cout<<endl;
    sort(v1.begin(),v1.end());
    display( v2);
    cout<<endl;
    v1.swap(v2);
    display( v1);
    cout<<endl;
    display( v2);
    cout<<"\n Capacity"<<v1.capacity();  
    // cout<<"\n Capacity"<<v1.pop_back();  
    cout<<"\n size"<<v1.size();  
    cout<<"\n At Position"<<v1.at(1);  
    cout<<"\n At front"<<v1.front();  
    cout<<"\n At back"<<v1.back();  
    cout<<"\n isEmpty"<<v1.empty();  
    v1.insert(it,2,22);
    // v1.clear();
     display( v1);
    return 0;
}