#include<iostream>
using namespace std;

class KiranaStore{
    int itemID;
    float price;
    public:
    void setData(int i,float p){
        itemID=i;
        price=p;
    }
    void display(void){
        cout<<"ItemID: "<<itemID<<endl;
        cout<<"Item Price: "<<price<<endl;
    }
};


int main(){
    int size=5;
    KiranaStore *ptr=new KiranaStore[size];
    KiranaStore *ptr2=ptr;
    int id;
    float p;
    for(int i=0;i<size;i++){
        cout<<"Enter item ID For "<<i+1<<" object:";
        cin>>id;
        cout<<"Enter Price For "<<i+1<<" object:";
        cin>>p;
        // (*ptr).setData(i,p);
        ptr->setData(id,p);
        ptr++;

    }
    for (int i = 0; i < size; i++)
    {
        ptr2->display();
        ptr2++;
    }
    
    
    return 0;
}