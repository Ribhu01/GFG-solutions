//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    int n=str.length();
	    unordered_map<int,int> map;
	    string ans;
	     if(n==1){
        return str;
    }
	    
	    
	    
	    for(int i=0;i<n;i++){
	        if(map.find(str[i]) == map.end()){
	            map[str[i]]++;
	            ans+=str[i];
	        }
	    }
	    
	    
	   return ans; 
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends