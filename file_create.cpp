#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout ;
    fout.open("myfile.txt");
    fout<<"Nitya Saini";
    return 0;
}