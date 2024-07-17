#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
 
    int age;
    float salary;
    public:
    Employee(){   //Default constructor or constructor with no arguments
        cout<<"Employee get 25000 bonus on Diwali"<<endl;
    }
    Employee(int a){
        if(a>60){
            cout<<"Employee get 30000 bonus on Diwali"<<endl;
        }
        else{
            cout<<"NO Bonus for"<<name<<endl;
        }
    }
    Employee(Employee &c1){
        name=c1.name;
        salary=c1.salary;
        age=c1.age;

    }
    friend void getInfo(Employee );

    
    ~Employee(){
        cout<<"The Object is Going to Destroy Nothing left!"<<endl;
    }
    void setData(string s,float sal,int a=20);
    void setData(void);
    void static reWards(int x){
    
        cout<<"Total Reward of Employee: "<<endl;
    }

};
class Customer{
    private:
    int x;
    public:
    void setData(int a){
        x=a;

    }
    void display(){
        cout<<"x="<<x<<endl;
    }
    friend void getInfo(Employee,Customer);

};
void getInfo(Employee e1,Customer c1){
    cout<<"The age of e1="<<e1.age          <<endl;
    cout<<"The name of e1="<<e1.name<<endl;
    cout<<"The salary of e1="<<e1.salary<<endl;
    cout<<"The value of x in Customer class="<<c1.x<<endl;

}
// int Employee::rewards=45;

void Employee::setData(string s,float sal,int a){
    name=s;
    age=a;
    salary=sal;

}
void Employee:: setData(void){
    cout<<"Employee name="<<name   <<endl;
    cout<<"Employee age="<<age<<endl;
    cout<<"Employee salary="<<salary<<endl;
}
int main(){
    Employee anand;
    Customer aanchal;
    aanchal.setData(5);
    // aanchal.display();
    anand.setData("Anand",40000,23);
    anand.setData();
    cout<<"\n***************        ********************  ********************  ***********\n";
    getInfo(anand,aanchal);
    return 0;
}