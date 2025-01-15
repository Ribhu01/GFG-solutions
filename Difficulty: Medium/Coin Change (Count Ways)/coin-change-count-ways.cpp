//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int function (int amount, vector<int>& coins,int index,vector<vector<int>>& dp){
        if(amount ==0) return 1;
        if(amount<0 || index >= coins.size()) return 0;

        if (dp[index][amount] != -1) return dp[index][amount];

        int inc = function(amount - coins[index],coins,index,dp);
        int exc =function(amount,coins,index+1,dp);
        int totalways = inc+exc;
        return dp[index][amount]=totalways;
    }
    
    int count(vector<int>& coins, int sum) {
        // code here.
        vector<vector<int>> dp(coins.size(), vector<int>(sum + 1, -1));
        return function(sum,coins,0,dp);
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
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends