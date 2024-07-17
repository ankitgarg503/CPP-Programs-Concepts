#include<iostream>
using namespace std;
static int count;

class Student{
    
    public:
    Student(){
        cout<<"This is Constructor no "<<count<<"  Running"<<endl;
        count++;
    }
    ~Student(){
        cout<<"This is Destructor no "<<count<<"Running"<<endl;
        count--;
    }
};
int main(){
    
    Student s1;
    printf("We are in main function\n");
    {
        Student s2;
        cout<<"\n This is the Second object\n";
    }
    return 0;
}