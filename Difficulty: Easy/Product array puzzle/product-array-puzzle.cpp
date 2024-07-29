//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        int countZero = 0;
        int indOfZero = -1;
        long long int product = 1;
        for(int i = 0; i< n; i++){
            if(nums[i] != 0)
                product *= nums[i];
            else{
              countZero++;
              indOfZero = i;
            } 
        }
        vector<long long int> res(n,0);
        if(countZero >= 2) return res;
        else if(countZero == 1){
            res[indOfZero] = product;
            return res;
        }
        for(int i  = 0; i<n;i++){
            res[i] = product/nums[i];
        }
        
        
        
        
        return res;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends