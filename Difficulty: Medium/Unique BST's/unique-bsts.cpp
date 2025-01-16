//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int function(int n,vector<int>& dp ){
        if(n<=1) return 1;
        if (dp[n] != -1) return dp[n];
        int total=0;
        for(int i =1;i<=n;i++){

            int left = function(i-1,dp);
            int right= function(n-i,dp);
             total += left*right;
        }
        return dp[n]=total;
    }
    // Function to return the total number of possible unique BST.
    int numTrees(int n) {
        // Your code here
        vector<int> dp(n+1,-1);
        return function (n,dp);
    }
};

//{ Driver Code Starts.
#define mod (int)(1e9 + 7)

int main() {

    // taking total testcases
    int t;
    cin >> t;
    while (t--) {

        // taking total number of elements
        int n;
        cin >> n;
        Solution ob;
        // calling function numTrees()
        cout << ob.numTrees(n) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends