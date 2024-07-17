#include<iostream>
using namespace std;

class ExamBuilder{
    private:
    int price;
    float total;
    int capacity;
    public:
    int investor;
    int shareHolder;
    void setData(int a, int b, int c);
    void Display(){
      cout<<"Price of ExamBuilder="<<price<<endl;
      cout<<"total_user of ExamBuilder="<<total<<endl;
      cout<<"capacity of ExamBuilder="<<capacity<<endl;
      cout<<"Investor of ExamBuilder="<<investor<<endl;
      cout<<"shareHolders of ExamBuilder="<<shareHolder<<endl;

    }
};

void ExamBuilder :: setData(int a,int b,int c){

    price=a;
    total=b;
    capacity=c;   
}

int main(){
    class ExamBuilder e1;
    e1.investor=5;
    e1.shareHolder=10;   
    e1.setData(1000,1200,15000);
    e1.Display();
    
    return 0;
}