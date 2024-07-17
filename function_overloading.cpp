#include<iostream>
using namespace std;
int area(int x, int y)
{
    return x*y;
}
int area(int x)
{
    return x*x;
}


int main(){
    cout <<"The area of circle having 4 radius="<<area(4)<<endl; 
    cout <<"The area of rectangle having 3 lenghth  5 Breadth="<<area(3,5)<<endl; 
    cout <<"The area of square having 6 as a side="<<area(4); 
   
    return 0;
}