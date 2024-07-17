#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout ;
    string s;
    // fout.open("myfile.txt");
    // fout<<"Nitya Saini";
    ifstream fin;
    fin.open("myfile.txt");
    getline(fin, s);
    cout<<s;
    return 0;
}