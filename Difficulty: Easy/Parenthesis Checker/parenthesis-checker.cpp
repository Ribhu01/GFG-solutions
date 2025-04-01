//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(auto x : s){
            if(x == '(' || x == '[' || x== '{'){
                st.push(x);
            }
            if(x == ')' || x == ']' || x== '}'){
                if(st.empty()) return false;
                
                char top = st.top();
                
                if( (x== ')' && top == '(') || (x == '}' && top =='{') 
                || (x == ']' && top == '[') ){
                    st.pop();
                }else{
                    return false;
                }
            
                
            }
        }
        if(st.empty()) return true;
        
        
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends