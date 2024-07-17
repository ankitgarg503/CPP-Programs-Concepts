#include<iostream>
using namespace std;

class GrandFather{
    int b;
    protected:
    int prot=20;
    public:
   int  pub;
};
class Father : public GrandFather{
    //  prot=10;
    protected:
    int c=30;
    public:
   void  show(void ){
     cout<<"Prot"<<prot<<endl<<"c="<<c;
    }
};
class Child:public Father{
    public:
    void display(void ){
  cout<<"\nProt"<<prot<<endl<<"c="<<c<<endl;
    }
};

int main(){
    Father f1;
    f1.show();
    Child c1;
    c1.pub=10;
    cout<<"pub="<<c1.pub<<endl;
    c1.display();
    return 0;
}