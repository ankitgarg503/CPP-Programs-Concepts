#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x, y;
    public:
    Point(int a, int b){
        x=a; y=b;

    }
    friend  int Distance(Point,Point);
    void Display(){
        cout<<"("<<x<<" , "<<y<<")"<<endl;
    }
    // void Distance(Point p1, Point p2){
    //     float d;
    //     d=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    //     cout<<"Distance of 2 Points="<<d<<"    units"<<endl;
    // }
};
int Distance(Point p1, Point p2){
        float d;
        d=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
        return d;
        // cout<<"Distance of 2 Points="<<d<<"    units"<<endl;
    }

int main(){
    Point p1(6,8);
    p1.Display();

    Point p2(8,10);
    p2.Display();
  int s=Distance(p1,p2);
  cout<<"Distance of 2 Points="<<s<<"    units"<<endl;

    return 0;
}