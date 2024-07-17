#include<iostream>
#include<map>
#include<string>
using namespace std;

void display(map<string,int> m1){
    map<string,int>::iterator it;
    for( it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"  "<<it->second<<endl;

    }
}

int main(){
    map<string,int> mp1;
    map<string,int> mp2;
    mp1["Ankit Garg"]=11;
    mp1["Nitya"]=117;
    mp1["Anand"]=131;
    mp1["Sagar"]=111;
    mp1["Jatin"]=114;
    mp1["Yain"]=115;
    mp2["Ankit"]=11;
    mp2["Nitya Garg"]=117;
    mp2["Anand Gupta"]=131;
    mp2["Sagar Sinha"]=111;
    mp2["Jatin Garg"]=114;
    mp2["Yain Garg"]=115;
    mp2.insert({"Sharad",100});
     display(mp1);
     cout<<"Size="<<mp1.size()<<endl;
     cout<<"isEmpty="<<mp1.empty()<<endl;
     cout<<"MAX_SIZE="<<mp1.max_size()<<endl;
     mp1.clear();
     display(mp2);
     cout<<endl;
     mp1.swap(mp2);
     display(mp1);
     cout<<endl;
     display(mp2);
    return 0;
}