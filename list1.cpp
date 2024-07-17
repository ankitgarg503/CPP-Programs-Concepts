#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l1 {11,22,33,44,55,66,77,88};
    int p=l1.size();
   

    cout<<p;
    cout<<endl;
    reverse(l1.begin(),l1.end());
    //l1.sort();
     list<int>::iterator it;
    it=l1.begin();
   // sort(l1.begin(),l1.end());
    for(int i=0;i<l1.size();i++){
        cout<<*it<<" ";
        it++;
        
      
    }
    return 0;
}