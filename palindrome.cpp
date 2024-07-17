#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"This  Program is Going to Check Entered String is Palindrome or Not"<<endl;
    char str1[30],str2[30];
    cout<<"Enter First String:  ";
    cin>>str1;
   // cout<<"Enter Second String:  ";
   // cin>>str2;
    strcpy(str2,str1);
   
   strrev(str1);
   int a=strcmp(str1,str2);
    if (a==0)
    {
        cout<<"Entered String is Palindorme";
    }
    else{
        cout<<a<<endl;
        cout<<"Entered String is not a Palindrome";
    }
    
    
      
}