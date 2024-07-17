#include<iostream>
#include<vector>
using namespace std;
void display(vector<int > &v2){
    // cout<<"Position of element "<<v2.at(4);
     cout<<"Front element "<<v2.front()<<endl;
     cout<<"Last element "<<v2.back()<<endl;
     cout<<"Position of element "<<v2.at(4);
    for(int i=0; i<v2.size(); i++){
        cout<<i+1<<" element  = "<<v2[i]<<endl;
    }
}

int main(){
    vector<int> v1;
    int element,s;
    cout<<"Capacity of vector "<<v1.capacity()<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>element;
        v1.push_back(element);
    }
   // display(v1);
   // v1.pop_back();
    //v1.clear();
    cout<<v1.size();
    cout<<"First pop element "<<endl;
    cout<<"Capacity of vector "<<v1.capacity()<<endl;
     cout<<"Last element "<<v1.back()<<endl;
    s=v1.size();
    element=v1[s-1];
    cout<<"\n Element="<<element;
    cout<<"\n Back element="<<v1.back();

     //display(v1);
    cout<<"Capacity of vector "<<v1.capacity()<<endl;
    cout<<"Size of vector "<<v1.size()<<endl;
    return 0;
}