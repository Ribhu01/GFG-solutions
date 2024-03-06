//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
     unordered_map<long, int> map;
     vector <int> result;
    
     
     for (int i = 0;i<n;i++){
           if(map.find(arr[i]) != map.end()){
               if(map[arr[i]] == 1){
                   result.push_back(arr[i]);
               }
               
               map[arr[i]]++;
               
           }else{
          
              map[arr[i]] = 1;
           
           }
        }
        
       if(result.empty()){
           return {-1};
        }else{
            sort(result.begin(),result.end());
            return result;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends