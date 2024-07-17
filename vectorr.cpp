#include<iostream>
#include<vector>
using namespace std;


template<class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;
    vector<int> vec2;
    cout<<"Capacity of vector="<<vec1.capacity()<<endl;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec2.push_back(element);
    }
    vec2.pop_back();
    display(vec2);    
    return 0;
}
