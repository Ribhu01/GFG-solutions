//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int max = INT_MIN;
        int max2 = INT_MIN;
        for (int i=0 ; i<arr.size();i++){
            if(arr[i]>max){
                max= arr[i];
            }
             
        }
        
        for(int i = 0 ; i < arr.size();i++){
            
            if(arr[i]==max){
                continue;
            }
            
                if(arr[i]>max2){
                max2= arr[i];
             
                 }
            
        }
        if(max2==INT_MIN)
             return -1;
        
        return max2;
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
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends