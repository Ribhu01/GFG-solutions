//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   bool func(int n,vector<int>& dp){
        if(dp[n]!=-1)return dp[n];
        if(n==1)return dp[n]=false;
        if (n==2)return dp[n]=true;
        
        for(int i = 1;i<n;i++){
            if(n%i==0){
               if(!func(n-i,dp)){
                    return dp[n]= true;
               }
            }
        }
        return dp[n]=false;
    }

    bool divisorGame(int n) {
    vector<int> dp(n+1,-1);
        return func(n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution obj;
        bool ans = obj.divisorGame(n);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends