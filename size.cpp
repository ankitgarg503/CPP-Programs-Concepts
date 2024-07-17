#include<iostream>
using namespace std;


#include <iostream>
using namespace std;
 
class Point
{
    int x, y;
public:
    Point(){}
   Point(const Point &p) { x = p.x; y = p.y; }
   int getX() { return x; }
   int getY() { return y; }
};
 
int main()
{
    Point p1;
    Point p2 = p1;
    cout << "x = " << p2.getX() << " y = " << p2.getY();
    return 0;
}




















// class X 
// {
// public:
//     int x;
// };
 
// int main()
// {
//     X a = {10};
//     X b ;
//     b=a;
//     cout << a.x << " " << b.x;
//     return 0;
// }










// int main(){
//      int a=5;
//     cout<<"a="<<++a<<endl;
//     cout<<"Size ="<<sizeof(3.14)<<endl;
//     cout<<"Size ="<<sizeof(3.14f)<<endl;
//     cout<<"Size ="<<sizeof(3.14F)<<endl;
//     cout<<"Size ="<<sizeof(3.14L)<<endl;
//     cout<<"Size ="<<sizeof(3.14)<<endl;
//     return 0;
// }