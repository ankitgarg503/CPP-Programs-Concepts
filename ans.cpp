#include<iostream>
#include<bits/stdc++.h>
using namespace std;





bool solve(string t){
    vector<string>v;
    v.push_back("ANU");
    v.push_back("AUN");
    v.push_back("NAU");
    v.push_back("NUA");
    v.push_back("UAN");
    v.push_back("UNA");
    if(t.size()>=4){
        return false;
    }
    for(int i=0;i<v.size();i++){
                if(t.find(v[i])!=string::npos){
                    return true;
                }
    }
}


int main(){
    int t;
    cin >> t;
    int ans=0;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            string temp;
            cin >> temp;
            if(solve(temp)){
                ans++;
            }
        }
     cout<<ans<<endl;
    }
    return 0;
}