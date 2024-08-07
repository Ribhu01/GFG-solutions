//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
          stack<int> s;
          queue<int>q2;
        if(k > q.size()) {
            return q;
        }
        
        for(int i=1;i<=k;i++){
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty()){
            q2.push(s.top());
            s.pop();
        }
        
        while(!q.empty()){
             q2.push(q.front());
            q.pop();
        }
        
        return q2;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends