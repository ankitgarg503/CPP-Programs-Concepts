#include<iostream>
using namespace std;


template <class T>

class vector{
    public:
     int size;
     T *arr;
     vector(T m){
        size = m;
        arr=new T[size];
         for (int i = 0; i < this->size; i++)
        {
            arr[i]=0;
        }
        
     }
     int operator + (vector &y){
        int sum = 0;
        for(int i = 0; i < size;i++){
          sum=sum+arr[i]+y.arr[i];
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
 int ans=v1+v2;
    cout<<ans<<endl;
    //  vector <int >v(3);
    //  vector <int >v1(3);
    //  int x[]={1,2,30};
    //  int y[]={11,22,3};
    //  v.arr=x;
    //  v.arr=y;
    //  int ans=v+v1;
    //  cout<<ans<<endl;
     

    return 0;
}