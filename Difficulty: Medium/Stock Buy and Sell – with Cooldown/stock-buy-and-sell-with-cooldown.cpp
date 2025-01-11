//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        if(n==0){
            return 0;
        }
        vector<vector<int>> dp(n + 1, vector<int>(2, -1));
        dp[n][0]=0;
        dp[n][1]=0;
        for(int i = n-1;i>=0;i--){
            for(int j = 0;j<=1;j++){
                if(j){
                    int sell = prices[i] + (i + 2 <= n ? dp[i + 2][0] : 0);
                    int pass = dp[i+1][1];
                    dp[i][j]=max(sell,pass);
                }else{
                    int buy = dp[i+1][1] - prices[i];
                    int pass = dp[i+1][0];
                    dp[i][j]=max(buy,pass);
                }

            }
        }
        return dp[0][0];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends