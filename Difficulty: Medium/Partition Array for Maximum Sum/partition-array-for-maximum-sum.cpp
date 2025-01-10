//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
     int function(vector<int>& arr, int k,int index,vector<int>& dp){
        if (index >= arr.size()){
        return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }

        int max_element=0;
        int max_sum=0;
        for(int i = 0;i<k && index + i < arr.size();i++){
            max_element=max(max_element,arr[i+index]);
            int sum = max_element *(i+1) + function(arr,k,index+i+1,dp);
            max_sum=max(max_sum,sum);

        }
        return dp[index]= max_sum;

    }
    int solve(int n, int k, vector<int>& arr){
        // Code here
         
        vector<int> dp(n+1,-1);
        return function(arr,k,0,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends