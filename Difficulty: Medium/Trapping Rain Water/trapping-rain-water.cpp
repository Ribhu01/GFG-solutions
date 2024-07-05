//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
         
        int max_left[n],max_right[n];
        max_left[0]=arr[0];
        for(int i =1;i<n;i++){
            max_left[i]=max(max_left[i-1],arr[i]);
        }
        
        max_right[n-1]=arr[n-1];
        for(int i =n-2 ;i>=0;i--){
            max_right[i]=max(max_right[i+1],arr[i]);
        }
       long long  water_trapped = 0;
       
        for (int i = 1 ; i<n-1;i++){
             int var = min(max_left[i - 1], max_right[i + 1]);
            if (var > arr[i]) {
            water_trapped += var - arr[i];
               }
        }
       return water_trapped;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends