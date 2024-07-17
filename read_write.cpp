#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

     ofstream out;
     out.open("myfile.txt",ios::app);
     string s;
     cin >> s;
     out<<"My name is="<<s<<endl;
     out.close();


    //  ifstream in;
    //  string s;
    //  in.open("myfile.txt");
    //  in>>s;
    //  cout<<"Content of File is  \n"<<s;
    //  getline(in,s);
    //  cout<<" "<<s<<endl;
    //  getline(in,s);
    //  cout<<" "<<s<<endl;
    //  in.close();
    
    return 0;
}