#include<iostream>
#include<string>
#include<string.h>
using namespace std;


// void swap(char ch1, char ch2){

//    char temp;
//    temp=ch1;
//    ch1=ch2;
//    ch2=temp;
// }
void permutation(string s,int m,int n){
    if (m==n)
    {
        cout<<s<<"\t";
        /* ccoutode */
    }
    else{
        for ( int i = 0; i <=n; i++)
        {
            swap(s[m],s[i]);
            permutation(s,m+1,n);
            swap(s[m],s[i]);
        }
        
    }
    
    
}
int main(){
    string s;
    int m;
    cout<<"Permuataion of string"<<endl;
    cout<<"Enter one string:  "<<endl;
    cin>>s;
    m=s.size();
    // cout<<s.size()<<endl;
    permutation(s,0,m-1);
    return 0;
}