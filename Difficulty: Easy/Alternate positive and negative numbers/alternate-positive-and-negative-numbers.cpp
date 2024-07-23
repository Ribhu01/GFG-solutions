//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
 vector<int> pos;
	   vector<int> neg;
	   
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]<0)
	       {
	           neg.push_back(arr[i]);
	       }
	       else
	           pos.push_back(arr[i]);
	   }
	   
	   int j=0;
	   int i=0;
	   for(i=0;i<n && j<pos.size() && j<neg.size();i=i+2 )
	   {
	       arr[i]=pos[j];
	       arr[i+1]=neg[j];
	       j++;
	   }
	   
	   if(j<pos.size())
	   {
	       while(j<pos.size())
	       {
	           arr[i]=pos[j];
	           i++;
	           j++;
	       }
	   }
	   else
	   {
	       while(j<neg.size())
	       {
	           arr[i]=neg[j];
	           i++;
	           j++;
	       }
	   }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends