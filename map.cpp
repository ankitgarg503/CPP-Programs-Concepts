#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int>m1;
    m1["Annu"]=67;
    m1["Tannu"]=89;
    m1["Rohit"]=78;
    map<string,int>::iterator itr;
    for(itr=m1.begin();itr!=m1.end();itr++){
        cout<<(*itr).first<<"="<<(*itr).second<<endl;
    }
    cout<<sizeof(m1);
    return 0;
}