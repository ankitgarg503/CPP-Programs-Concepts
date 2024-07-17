
    #include<iostream>
    using namespace std;
    #include<vector>
    #include<algorithm>
int mod=1e9+7;
    
    int minimum(vector<int> t){
         int mini=9999999;
               for(int i=0;i<t.size();i++){
                   if(mini>t[i]){
                     mini=t[i];
                   }
               }
        return mini;
    }

    int sumSubarrayMins(vector<int>& arr) {
        
         int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                 vector<int> temp;
                for(int k=i;k<=j;k++){
                    temp.push_back(arr[k]);
                }
                int p=minimum(temp);
                ans=(ans+p)%mod;
            }
           
        }
       
        return ans;
    }
    int main(){
        vector<int> v={1,2,3};
        cout<<sumSubarrayMins(v);
        return 0;
    }