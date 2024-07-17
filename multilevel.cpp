#include<iostream>
using namespace std;

class Student {
    protected:
    int roll_no;
    public:
    void set_roll_no(int );
    void display(void);

};

void Student::set_roll_no(int r){
    roll_no = r;
}
void Student::display(void) {
    cout<<"Your roll_no="<<roll_no<<endl;
}

class Exam:public Student{
    public:
    float maths,chemistry;
    public:
    void set_marks(float,float);
    void show_marks(void);


};

void Exam :: set_marks(float m1,float m2){
    maths=m1;
    chemistry=m2;
    
}
void Exam :: show_marks(void){
    cout<<"Marks obtained in maths="<<maths<<endl;
    cout<<"Marks obtained in Chemistry="<<chemistry<<endl;

}
class Result :public Exam{
    float percentage;
    public:
    void resultStatus(){
        percentage = (maths+chemistry)/2;
        if(percentage<40.0){
            cout<<"Sorry to Say but You are Fail in the Exam Your Total Score="<<percentage<<endl;
        }
        else{
            cout<<"Congratulations! You have successfully completed your current exam and Your Total Score="<<percentage<<endl;
        }
    }

};


int main(){
    Result r1;
    r1.set_roll_no(11);
    r1.display();
    r1.set_marks(90,80);
    r1.show_marks();
    r1.resultStatus();
    
    return 0;
}