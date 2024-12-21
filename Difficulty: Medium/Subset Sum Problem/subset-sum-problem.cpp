//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        // vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, -1));
        // return f(capacity, val, wt, n,dp);
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, false));
             for (int i = 0; i <= n; i++) {
                    dp[i][0] = true;
                }
        for (int i = 1 ;i<=n;i++){
            bool inc=false;
            for(int j= 1;j<=target;j++){
                
               if(arr[i-1]<=j){
                inc = dp[i-1][j-arr[i-1]];
                } 
                bool exc = dp[i-1][j]; 
                
             dp[i][j]= inc || exc;
            }
        }
        return dp[n][target];
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends