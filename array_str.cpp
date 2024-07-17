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
    struct Employee e1[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter Detail for "<<i+1<<" Employee"<<endl;
        cin>>e1[i].age;
        cin>>e1[i].salary;
        cin>>e1[i].name;
    }
    cout<<"********** Details of 5 Employee ***************";
    for (int i = 0; i < 5; i++)
    {
        cout<<e1[i].age<<endl;
        cout<<e1[i].salary<<endl;
        cout<<e1[i].name<<endl;

    }
    
    
    // e1.age=15;
    // e1.salary=300000.0;
    // char str1[20]="Ankit_Garg";
    // strcpy(e1.name,str1);
    // cout<<"Age="<<e1.age<<endl;
    // cout<<"Salary="<<e1.salary<<endl;
    // cout<<"Name="<<e1.name<<endl;
    
    
    
    return 0;
}