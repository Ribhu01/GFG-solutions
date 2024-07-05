//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int firstElementKTime(int n, int k, int arr[]) {
        
        
        unordered_map<int, int> map;
        
        for (int i =0 ; i<n;i++){
                map[arr[i]]++;
                 
            if(map[arr[i]]>=k){
                return arr[i];
            }
        }
        
      
     
       return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.firstElementKTime(n, k, a) << endl;
    }

    return 0;
}
// } Driver Code Ends