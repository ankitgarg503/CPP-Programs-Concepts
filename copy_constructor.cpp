#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    int age;
    public:
    Employee(string name, int age){
        this->name = name;
        this->age = age;
    }
    void show(void){
        cout<<"Name="<<name<<"\n age="<<age<<endl;
    }
    Employee(Employee const &sohan){
            this->name="sohan";
            this->age=sohan.age;
    }
};




int main(){
    Employee rohan("Rohan",33);
    rohan.show();
    Employee sohan(rohan);
    sohan.show();
    return 0;
}