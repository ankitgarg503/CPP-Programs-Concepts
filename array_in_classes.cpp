#include<iostream>
using namespace std;

int counter=0;
class SunRise{
    int visitors_id[10];
    int price_id[10];
    
    public:
    void set_counter(void){
        counter=0;
    }
    void getdata(void){
        cout<<"Enter the visitor id of visitor no ="<<counter+1<<endl;
        cin>>visitors_id[counter];
         cout<<"Enter the price of visitor no ="<<counter+1<<endl;
        cin>>price_id[counter];
        counter++;


    }
    void display(void){

        for (int i = 0; i < counter; i++)
        {
            cout<<"The visitor id of visitor no="<<i+1<<" is "<<visitors_id[i]<<endl;
            cout<<"The price of visitor no="<<i+1<<" is "<<price_id[i]<<endl;
        }
        

    }

};
int main(){
    SunRise s1;
    s1.getdata();
    // s1.set_counter();
    s1.getdata();
    s1.getdata();
    s1.getdata();
    s1.display();
    
    return 0;
}