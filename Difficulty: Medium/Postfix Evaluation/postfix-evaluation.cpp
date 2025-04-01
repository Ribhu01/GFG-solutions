//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        // code here
        stack<int>st;
        
        for(auto x : arr){
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                
                if (x == "+") st.push(a + b);
                else if (x == "-") st.push(a - b);
                else if (x == "*") st.push(a * b);
                else if (x == "/") st.push(a / b);
            }else{
                st.push(stoi(x));
            }
        
        }
        return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends