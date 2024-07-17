//call by value and call by adress and call by refernce in c++
#include<iostream>
using namespace std;
void swap (int* a,int* b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int x=5,y=6;
	cout<<"Before calling function\n";
	cout<<"x="<<x<<"\ty="<<y;
	swap(&x,&y);
	cout<<"\nAfter calling function\n";
	cout<<"x="<<x<<"\ty="<<y;
	
	
}
