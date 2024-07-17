#include<iostream>
using namespace std;

class Maths{
   public:
    float radius,area1,area2,length,breadth;
    public:
    // void area(float x){
    //     radius = x;
    //     area1=3.14*radius*radius;
    // }
    void area(float x,float y){
        length = x;
        breadth = y;
        area2=length*breadth;
    }
    void display(void){
        cout<<"Required area="<<area1<<endl;
        cout<<"Required area="<<area2<<endl;
    }
    

};
class Test:public Maths{
    public:
    void area(int x,int y){
        length=x;
        breadth=y;
        area2=2*length+2*breadth;
    }

};


int main(){
    Maths m1;
    Test t1;
    t1.area(2,5);
    // m1.area(4,3);
    t1.display();
    return 0;
}