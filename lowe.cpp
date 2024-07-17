#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s="Ankit 777 & 76767";
    string s1;

      for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'   ){
                s1=s1+s[i];
            }
            else{
                continue;
            }

        }
      transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
      cout<<s1;
    return 0;
}