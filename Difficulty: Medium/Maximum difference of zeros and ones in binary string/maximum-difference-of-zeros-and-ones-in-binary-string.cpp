//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int max_diff = INT_MIN;
	    int curr_diff = 0;
	    for(int i = 0 ;i< S.size();i++){
	        int temp = ( S[i] == '0') ? 1 : -1;
	        curr_diff += temp ;
	        max_diff = max(max_diff,curr_diff);
	        if(curr_diff < 0){
	            curr_diff = 0;
	        }
	        
	    }
	    return max_diff;
	}
};


//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends