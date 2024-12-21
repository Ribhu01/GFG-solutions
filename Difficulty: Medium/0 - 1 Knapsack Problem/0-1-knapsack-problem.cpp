//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(int w, vector<int> &val, vector<int> &wt,int n,vector<vector<int>>& dp){
        if(n==0 || w==0)return 0;
         if (dp[n][w] != -1) return dp[n][w];
        int inc=0;
        if(wt[n-1]<=w){
            inc = val[n-1]+f(w-wt[n-1],val,wt,n-1,dp);
        }
        
        int exc= f(w,val,wt,n-1,dp);
        return dp[n][w]=max(inc,exc);
    }
    // Function to return max value that can be put in knapsack of capacity.
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        int n = wt.size();
        // vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, -1));
        // return f(capacity, val, wt, n,dp);
        vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
        
        for (int i = 1 ;i<=n;i++){
            for(int j= 1;j<=capacity;j++){
                int inc=0;
               if(wt[i-1]<=j){
                inc = val[i-1]+ dp[i-1][j-wt[i-1]];
                } 
                int exc = dp[i-1][j]; 
                
             dp[i][j]=max(inc,exc);
            }
        }
        return dp[n][capacity];
    }
};

//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends