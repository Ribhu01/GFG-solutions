//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
         int x;
        if(low<high){
           x=partition(arr,low ,high);
           quickSort(arr,low,x-1);
            quickSort(arr,x + 1,high);
        }
    }
    
           void swap(int *m,int *l){
            int temp;
            temp = *m;
            *m = *l;
            *l = temp;
        }
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
         int pivot=arr[low];
        int i=low ;
        int j=high;
       
    do
        {
            while (arr[i] <= pivot)
            {
                i++;
            }
    
            while (arr[j] > pivot)
            {
                j--;
            }
    
            if (i < j)
            {
                swap(&arr[i],&arr[j]);
            }
        } while (i < j);
    
        // Swap A[low] and A[j]
        swap(&arr[low],&arr[j]);
        return j;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends