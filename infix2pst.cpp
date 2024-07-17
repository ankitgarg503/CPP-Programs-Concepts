#include<iostream>
#include<string>
#include<stack>
using namespace std;


int precedence(char a){
    if(a=='^'){
        return 4;
    }  
    else if(a=='*' or a=='/'){
        return 3;
    }
    else if(a=='+' or a=='-'){
        return 2;
    }
    else return -1;
}

string infix2Post(string str){
    string ans="";
    stack<char> st;
    for(int i=0; i<str.size();i++){
        if((str[i]>='a' and str[i] <='z') or (str[i]>='A' and str[i] <='Z') or (str[i]>='0' and str[i] <='9')){
            ans+=str[i];
        }
        else if(str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            while(!st.empty() and st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() and precedence(st.top()) >= precedence(str[i]) ){
                ans+=st.top();
                st.pop();
                
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}


int main(){
    string str="a+b*c-8+";
    cout<<str<<endl;
    string ans=infix2Post(str);
    cout<<ans<<endl;
    return 0;
}