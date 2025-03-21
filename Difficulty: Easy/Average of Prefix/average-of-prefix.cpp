//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        vector<int> answer(arr.size());
        vector<int> prefix(arr.size());
        prefix[0] = arr[0];
        for(int i = 1;i<arr.size();i++){
            prefix[i] = prefix[i-1] +arr[i];
        }
        
        for(int i =0 ; i< arr.size();i++){
            answer[i] = prefix[i]/(i+1);
        }
        return answer;
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
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.prefixAvg(arr);

        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends