//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    int first_occurrence(int arr[], int l, int h, int x) {
    int first_occ = -1;
    int low = l;
    int high = h;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x) {
            first_occ = mid;
            high = mid - 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return first_occ;
    }

        int last_occurrence(int arr[], int l, int h, int x) {
            int last_occ = -1;
            int low = l;
            int high = h;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
                
                if (arr[mid] == x) {
                    last_occ = mid;
                    low = mid + 1;
                } else if (arr[mid] < x) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            
            return last_occ;
        }

    
    public:
    vector<int> find(int arr[], int n , int x )
    {
       int low =0;
       int high = n-1;
        // code here
        vector<int> result(2, -1);
       result[0]= first_occurrence(arr,low,high,x);
       result[1]= last_occurrence(arr,low,high,x);

       return result ;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends