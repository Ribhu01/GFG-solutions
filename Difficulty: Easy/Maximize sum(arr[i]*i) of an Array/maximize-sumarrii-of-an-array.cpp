//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
       long  maxi_sum=0;
        sort(a,a+n);
          int mod=1000000007;
        for (int i=0;i<n;i++){
              maxi_sum = (maxi_sum + (long) a[i] * i) % mod;
   
        }
        
        
       return maxi_sum;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends