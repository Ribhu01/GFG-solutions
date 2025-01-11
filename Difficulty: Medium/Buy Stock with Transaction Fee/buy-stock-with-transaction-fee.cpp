//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  long long function(vector<int>& arr, int k, int index, bool possession,
                 vector<vector<int>>& dp) {
        if (index >= arr.size()) {
            return 0;
        }
        if (dp[index][possession] != -1)
            return dp[index][possession];

        if (possession) {
            int sell = arr[index] - k + function(arr, k, index + 1, false, dp);
            int pass = function(arr, k, index + 1, true, dp);
            return dp[index][possession] = max(sell, pass);
        } else {
            int buy = function(arr, k, index + 1, true, dp) - arr[index];
            int pass = function(arr, k, index + 1, false, dp);
            return dp[index][possession] = max(buy, pass);
        }
    }
    long long maximumProfit(vector<int>& arr, int k) {
        // Code here
         int n = arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, -1));
        return function(arr, k, 0, false, dp);
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumProfit(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends