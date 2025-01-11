//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        int function(vector<int>& prices, int index, bool possession,int remaining_transactions,vector<vector<vector<int>>>& dp) {
            if (index >= prices.size() || remaining_transactions == 0) {
                return 0;
            }
            if (dp[index][possession][remaining_transactions] != -1) {
                return dp[index][possession][remaining_transactions];
            }
            if (possession) {
                int sell=prices[index]+function(prices, index+1, false,remaining_transactions - 1,dp);
                int hold =function(prices, index + 1, true, remaining_transactions,dp);
                return dp[index][possession][remaining_transactions]=max(sell, hold);
            } else {
    
                int buy = -prices[index]+function(prices, index + 1, true, remaining_transactions,dp);
                int skip =function(prices, index + 1, false, remaining_transactions,dp);
                return dp[index][possession][remaining_transactions] = max(buy, skip);
            }
       }
        int maxProfit(vector<int>&price){
            //Write your code here..
            int n = price.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return function(price, 0, false, 2,dp); 
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    
cout << "~" << "\n";
}

}

// } Driver Code Ends