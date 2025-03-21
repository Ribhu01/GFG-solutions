//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> answer(n,1);
        vector<int> prepro(n,1);
        vector <int> suffpro(n,1);
    
        for(int i =1;i<arr.size();i++){
            prepro[i]=arr[i-1]*prepro[i-1];
        }
        for(int i =arr.size()-2;i>=0;i--){
            suffpro[i]=arr[i+1]*suffpro[i+1];
        }

        for(int i =0;i<answer.size();i++){
            answer[i] = prepro[i]*suffpro[i];
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
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends