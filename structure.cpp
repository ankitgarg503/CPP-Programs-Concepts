#include<iostream>
#include<string.h>
using namespace std;
struct Employee
{
    int age;
    float salary;
    char name[20];
    /* data */
};

int main(){
    struct Employee e1;
    e1.age=15;
    e1.salary=300000.0;
    char str1[20]="Ankit_Garg";
    strcpy(e1.name,str1);
    cout<<"Age="<<e1.age<<endl;
    cout<<"Salary="<<e1.salary<<endl;
    cout<<"Name="<<e1.name<<endl;
    
    cout<<"Size of Union ="<<sizeof(e1);
    
    return 0;
}