#include<iostream>
#include<bits\stdc++.h>
using namespace std;


int main(){
    vector <int > v;
    vector <int > v1;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cin>>element;
      //  v[i] = element;
        v1.push_back(element);
        element=element+1;
        v.push_back(element);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
 cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v1[i]<<"  ";
    }
    swap(v,v1);
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v1[i]<<"  ";
    }
    /*
    cout<<endl;
    cout<<v.size();cout<<"  ";
    cout<<v.capacity();    
    cout<<endl;
    cout<<v1.size();cout<<"  ";
    cout<<v1.capacity();    
    cout<<endl;
    cout<<v.at(2);
    cout<<"    "<<v.back();
    vector <int > ::iterator it =v.begin();
    cout<<endl;
//    // v.clear();
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[*it]<<"  ";
//         it=it+1;
//     }
    cout<<v.empty()<<endl;
    v.erase(it+2,it+3);cout<<endl;
      for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    v.insert(it+2,8,3);
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<endl;
       for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    cout<<v.size();cout<<"  ";
    cout<<v.capacity();    
    cout<<endl;
  
*/
    return 0;
}