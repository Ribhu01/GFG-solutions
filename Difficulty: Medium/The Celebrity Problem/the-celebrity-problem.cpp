//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
    
        int row_count=0;
        int x;
        int n=mat.size();
        
          for(int i=0;i<n;i++){
              int count = 0 ;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){
                    count++;
                }
            }
            
            if(count==mat[i].size()){
                row_count++;
                x=i;
            }
        }
       
          if(row_count!=1){
              return -1;
          }
          
          for(int i=0;i<n;i++){
              if(i !=x & mat[i][x]==0){
                  return -1;
              }
          }
          
          
          
          
        return x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends