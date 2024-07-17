#include<iostream>
using namespace std;

class Car{
    public:
    int fuel;
    float price=450000;
    public:
    void setFuel(int f){
        fuel=f;

    }
    void Display(){
        cout<<"Fuel: "<<fuel<<" Litre"<<endl<<"PRices: "<<price<<endl;
    }

};
class RacingCar : public Car{
    float speed=34;
    public:
    void setSpeed(float s){
        speed = s;
    }
    void show(){
        cout<<"Speed: "<<speed<<endl;
    }
};



int main(){
    // Car c1;
    // RacingCar r1;
    // c1.setFuel(12);
    // c1.Display();
    // r1.setFuel(22);
    // // c1.Display();
    
    // r1.setSpeed(100);
    // r1.Display();   
    // r1.show();
 
    Car *c1=new Car();
    RacingCar r1;
    c1=&r1;
    c1->setFuel(12);
     c1->Display();
    // c1->show();
    r1.show();
    return 0;
}