#include<iostream>
using namespace std;

void factorial()
 {
 	int a,i;
    unsigned long long fact=1;
 	cout<<"Enter one Number:";
 	cin >>a;
 	for(i=1;i<=a;i++)
 	{
 		fact=fact*i;
	 }
	 	cout<<"Factorial of a number="<<fact;
	 
	 //return fact;
 }
int main(){
    int s;
	 factorial();
	// s=factorial();
    
    return 0;
}


// #include<stdio.h>
/*int main2()
{
	int s;
	int factorial();
	s=factorial();
	printf("Factorial of a number=%d",s);
}*/
//  void factorial()
//  {
//  	int a,i,fact=1;
//  	printf("Enter one Number:");
//  	scanf("%d",&a);
//  	for(i=1;i<=a;i++)
//  	{
//  		fact=fact*i;
// 	 }
// 	 	printf("Factorial of a number=%d",fact);
	 
// 	 //return fact;
//  }
