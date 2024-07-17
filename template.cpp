#include<iostream>
using namespace std;

template<class T>
class vec{
    public:
        int size;
        T *arr;
        vector(int m){
            size=m;
            arr=new T[size];
        }
        void display(){
            cout<<arr[0]<<"i+ "<<arr[1]<<"j+ "<<arr[2]<<"k"<<endl;
        }
        int dotProduct(vec &v){
            int d=0;
            for(int i=0;i<size;i++){
                d+=arr[i]*v.arr[i];
            }
            return d;
        }

};
int main(){
    vec<int>v1;
    v1.arr[0]=4;
    v1.arr[1]=6;
    v1.arr[2]=8;
    v1.display();

    vec<int>v2;
    v2.arr[0]=1;
    v2.arr[1]=3;
    v2.arr[2]=5;
    v2.display();
    
    int a=v1.dotProduct(v2);
    cout<<"dot product of v1 and v2 is "<<a<<endl;

    return 0;
}