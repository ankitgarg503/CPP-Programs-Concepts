#include<iostream>
#include<list>
using namespace std;

void display(list<int> l1){
    list<int>::iterator it;
    it=l1.begin();
    for (it ; it!=l1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}


int main(){
    list<int> l1;
    l1.push_back(11);
    l1.push_back(22);
    l1.push_back(13);
    l1.push_back(15);
    l1.remove(13);
    // l1.clear();
    list<int> l2;
    l2.push_back(111);
    l2.push_back(221);
    l2.push_back(11);
    l2.push_back(11);
    display(l1);
    display(l2);
    l1.merge(l2);
     l1.sort();
    // l1.reverse();
    display(l1);

    return 0;
}