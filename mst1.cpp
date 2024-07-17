#include<iostream>
#include<string>
using namespace std;
int g=5;
class Student{
    float marks;
    string name;
    public:
    void setData(float m,string n){
        marks = m;
        name = n;
    }
    void result(void){
        if(marks>35){
            cout<<"Student "<<name <<"  is Pass in the Exam"<<endl;
            cout<<"He get "<<marks<<" marks"<<endl;
        }
        else if(marks>=30 && marks<=35){
            marks=marks+5.0;
            cout<<"Student "<<name<<"  is Pass in the Exam"<<endl;
            cout<<"He get "<<marks<<" marks"<<endl;
        }
        else{
            cout<<"Student "<<name<<"  is Fail in the Exam"<<endl;
            cout<<"He get "<<marks<<" marks"<<endl;
        }
    }
    void result(int a){
        int g=10;
        cout<<::g<<endl;
        cout<<"Ankit Garg"<<endl;
    }
};



int main(){
    Student s;
    float marks;
    string name;
    // cout<<"Enter name of Student="<<endl;
    // cin >> name;
    // cout<<"Enter marks of Student="<<endl;
    // cin>>marks;
    // s.setData(marks,name);
    // s.result();
    s.result(4);
    
    return 0;
}