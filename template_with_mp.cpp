//TEMPLATE WITH MULTIPLE PARAMETERS
#include<iostream>
using namespace std;

template<class T1, class T2>
class Student{
    public:
    T1 marks;
    T2 fClor;
    Student(T1 m,T2 f){
        marks = m;
        fClor=f;
    }
    void display(){
        cout<<"marks="<<marks<<endl;
        cout<<"fClor="<<fClor<<endl;
    }
};

int main(){
    Student<int ,char> s(22.5,'r');
    s.display();

    
    return 0;
}