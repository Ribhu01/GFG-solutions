//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        long maximum = INT_MIN;
        long minimum = INT_MAX;
        for (int i=0;i<n;i++){
            
            if (a[i]>maximum){
                maximum = a[i];
            }
            if(a[i]<minimum){
                minimum = a[i];
            }
        
            
        }
        return make_pair(minimum, maximum);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends