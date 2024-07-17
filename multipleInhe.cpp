#include<iostream>
using namespace std;


class Base1{
    // int a=5;
    public:
    void virtual display(void){
        cout<<" WE are in Base 1 class!"<<endl;
    }
};
class Base2{
    public:
    void display(void){
      cout<<" WE are in Base 2 class!"<<endl;
    }
};
class child :public Base1{
    int b;
    public:
    void show(){
        cout<<" WE are in child class!"<<endl;
        cin>>b;
        try
        { 
             cout<<"Enter value of b "<<endl;
                if(b==0){
                    throw runtime_error("D");
                }
        int a=5/b;
     
            
        }
        catch(const exception& e)
        {
            cout<<"Division by zero Error occurred: "<<endl;
        }
        
    }
     void display(void){
        cout<<" WE are in Child class!"<<endl;
    }
};


int main(){
//   child c1;
//   c1.show();  
//   Base1 *obj=&c1;
//   obj->display();
//   c1.Base1::display();
    
//     int *ptr=(int *)malloc(sizeof(int)*4);
//     ptr[0]=22;
//     cout<<ptr[0]<<endl;
    
//     const int a=5;
 
//     cout<<a<<endl;

   int *ptr=new int;
    int *arr=(int *)malloc(sizeof(int)*4);
    ptr[0]=4;
    cout<<ptr[0]<<endl;

    auto it="Ankit";
    cout<<it<<endl;
    return 0;
}