#include<iostream>
using namespace std;


template<class T>

class vector{
    public:
    int size;
    T *arr;
    
    vector(T size){
        this->size = size;
        arr = new T[size];
        for (int i = 0; i < this->size; i++)
        {
            arr[i]=0;
        }
        
    }
    // vector(int *A){
    //     for(int i = 0; i < size;i++){
    //         arr[i] = A[i];
    //     }
    // }
    int operator * (vector &y){
        int sum=0;
        for(int i = 0; i < size;i++){
            sum=sum+arr[i] * y.arr[i] ;
        }
        return sum;
    }
};


int main(){
    int x[]={2,3,4};   
    int y[]={3,7,9};
    vector<int>v1(3);
    vector<int>v2(3);
    
  v1.arr=x;
    v2.arr=y;
 //int ans=v1.dotProduct(v2);
 int ans=v1*v2;
    cout<<ans<<endl;
    return 0;
}