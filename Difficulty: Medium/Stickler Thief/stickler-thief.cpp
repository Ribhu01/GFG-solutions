//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends
class Solution {
  public:
    int function(int n , vector <int>& arr,vector <int>& dp){
        if (n<0) return 0;
        if(n==0) return arr[0];
        if (dp[n]!=-1)return dp[n];
       int steal = arr[n]+ function(n-2,arr,dp);
       int skip= function(n-1,arr,dp);
        
      
        return dp[n]= max(steal,skip);
    }
    // Function to find the maximum money the thief can get.
    int findMaxSum(vector<int>& arr) {
        // Your code here
        int n =arr.size();
         vector<int> dp(n,-1);
        return function(n-1,arr,dp);
    }
};

//{ Driver Code Starts.

int main() {

    // taking total testcases
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

        Solution ob;
        // calling function findMaxSum()
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends