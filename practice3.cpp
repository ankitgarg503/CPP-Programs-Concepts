#include<iostream>
#include<string>

using namespace std;

class Student{
    protected:
    string name;
    int id;
    public:
    Student(){
        cout<<"Studentclass Constructor Running"<<endl;
    }
    void setData1(string name,int id){
        this->name = name;
       this-> id = id;
    }
    void  display(){
        cout<<"Student name ="<<name<<endl;
        cout<<"Id ="<<id<<endl;
    }
};
 class  Exam:public virtual Student{
    protected:
    int examID;
    string examName;
    public:
     Exam(){
        cout<<"Exam Class Constructor Runnin"<<endl;
    }
    void setData(int eid, string exName){
        examID = eid;
        examName=exName;
    }
    void display(){
        cout<<"Student EXAMname ="<<examName<<endl;
        cout<<"EXAM_Id ="<<examID<<endl;
    }

};
class Result:public virtual Exam{
    float percentage;
    string status;
    public:
    Result(){
        cout<<"Result class Constructor Running"<<endl;
    }
    void setData3(float per, string s){
        percentage=per;
        status=s;
        ++id;
    }
    void display3(){
        cout<<"Student PErcentage ="<<percentage<<endl;
        cout<<"Status ="<<status<<endl;
    }

};
int main(){
    // Student *ptr=new Student;
    // Exam e1;
    // ptr=&e1;
    // ptr->setData1("Ankit",20);
    // ptr->display();
    //ptr->display();
    // Student s1;
    // Exam e1;
   Result *r1=new Result;
    // s1.setData("Ankit",20);
    // s1.display();
    // e1.name="Ankit";
    // (*r1).setData3(99.05,"PASS");
    // (*r1).setData1("Ankit",20);
    // (*r1).Student::display();
    // (*r1).setData(2304,"Maths");
    // (*r1).display();
   
    //r1->display3();
    delete r1;
}








/*

class Employee{
    public:
    string name;
    static int rewards;
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
    ~Employee(){
        cout<<"The Object is Going to Destroy Nothing left!"<<endl;
    }
    void setData(string s,float sal,int a=20);
    void setData(void);
    void static reWards(int x){
        rewards = x;
        cout<<"Total Reward of Employee: "<<rewards<<endl;
    }

};
int Employee::rewards=45;

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
    // Employee::reWards(60);
    Employee rohan;
    // rohan.reWards(34);
    rohan.setData("Nitya",50000,23);

    rohan.setData();
    Employee sohan(75);
    Employee ankit(rohan);
    ankit.setData(rohan.name,rohan.salary,rohan.age);
    cout<<"** ************ *********** ************* ***********"<<endl;
     ankit.setData();
    return 0;
}*/