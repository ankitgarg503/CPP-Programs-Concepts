#include<iostream>
using namespace std;
class List{
    int a,b;
    public:
    List(int m,int n) : b(n),a(m){
        cout << "a: " << a <<"\nb: " << b << endl;
    }
};



int main(){
    List l1(3,4);
    
    return 0;
}