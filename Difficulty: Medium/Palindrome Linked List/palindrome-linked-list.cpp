//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node *head){
         struct Node*  p = head;
       struct Node* q=NULL;
      struct Node*  r=NULL;
        while (p!=NULL){
            // sliding pointer
            r = q;
            q=p;
            p=p->next;
            
        q->next=r;    
        }
        head=q;

        return head;
    }
    
    
    
    bool isPalindrome(Node *head)
    {
        //Your code here
         struct Node *slow = head;
         struct Node *fast = head;
        bool palli = true;
       
       
        while(fast != NULL && fast->next != NULL && fast->next->next != NULL){
             slow = slow->next;
             fast=fast->next->next;
        }
       
        // right now slow is on middle Node
        struct Node *first = head;
       
        struct Node*second_head = reverse(slow->next);
         struct Node*second = second_head;
       
       
       while(second!=NULL){
           if(first->data != second->data){
               palli = false;
               break;
           }
           first=first->next;
           second=second->next;
           
       }
        // reverse(second_head);
        
        return palli;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends