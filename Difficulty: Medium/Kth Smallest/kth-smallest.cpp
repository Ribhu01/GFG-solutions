//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    int partition(int arr[], int l, int r){
            
                int pivot = arr[l];
                int i = l - 1, j = r + 1;
             
                while (true) {
                    do {
                        i++;
                    } while (arr[i] < pivot);
                    do {
                        j--;
                    } while (arr[j] > pivot);
                    if (i >= j)
                        return j;
             
                    swap(arr[i], arr[j]);
                }
                
            }
      int partition_r(int arr[],int l,int r){
                
                srand(time(NULL));
                int ran = l + rand() % (r - l);
                swap(arr[ran], arr[l]);
                
                
                return partition(arr, l, r);
            }
         void quickSort(int arr[], int l, int r){
            
                if (l < r) {
                    
                    int pi = partition_r(arr, l, r);
                    quickSort(arr, l, pi);
                    quickSort(arr, pi + 1, r);
                }
            
            }    
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
            quickSort(arr, l, r);
           
       return arr[k-1]; 
    
    }
    
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends