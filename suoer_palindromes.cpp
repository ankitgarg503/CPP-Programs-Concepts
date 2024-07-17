    #include<iostream>
    using namespace std;
    #include<algorithm>
    #include<math.h>
bool checkPalindrome(int num){
        if(num<=9){
            return true;
        }
        int t=num;
        string p=to_string(num);
        reverse(p.begin(),p.end());
        num=stoi(p);
        if(num==t){
            return true;
        }
        else{
            return false;
        }
    }
    
    int superpalindromesInRange(string left, string right) {
        int l=stoi(left);
        int r=stoi(right);
        int ans=0;
        for(int i=l;i<=r;i++){
            if(checkPalindrome(i)){
                int p=sqrt(i);
                if((p*p)==i){
                    ans++;
                }
            }
        }
        return ans;
    }

    int main(){
        string l="12";
        string r="500";
        int ans=superpalindromesInRange(l,r);
        cout<<ans<<endl;
        return 0;
    }