//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int function(string &s,int i,int j,vector<vector<int>>& dp){
        if(i == s.length() || j==s.length()){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==s[j]&i!=j){
            return dp[i][j]=1 + function(s,i+1,j+1,dp);
        }else{
            return dp[i][j] = max(function(s,i+1,j,dp), function(s,i,j+1,dp));
        }
    
        return dp[i][j];
    }
    int LongestRepeatingSubsequence(string &s) {
        // Code here
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1)); 
       return function(s,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.LongestRepeatingSubsequence(str);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends