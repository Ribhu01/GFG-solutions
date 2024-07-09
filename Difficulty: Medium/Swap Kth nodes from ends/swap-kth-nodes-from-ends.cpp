//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
          int count=0;
    Node *ptr=head,*temp=head;
    if(head->next==NULL) return head;
    
    
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    // If K is more than no of nodes then return 
    if(count<K) return head;
    ptr=head;
    
    //It's a special case where node is equal to 2
    if(count==2){
        head=ptr->next;
        head->next=ptr;
        ptr->next=NULL;
        return head;
    }
    
    
    int val=K,ind=K;
    //when you have odd no of nodes and kth nodes is the middle node then you simply return 
    if(count%2==1 && count/2+1==K) return head;
    
    //if K equal to last node
    if(count==K){
        val=1;
        ind=1;
    }
   
   //pointing (k-1)th nodes from begginning 
    for(int i=1;i<val-1;i++)
    temp=temp->next;
    
    //pointing (k+1)th nodes from end
    for(int i=1;i<count-ind;i++)
    ptr=ptr->next;
    
    
    Node *q=NULL;
    //swapping the nodes
    if(K==1 || count==K){
       head=ptr->next;
       head->next=temp->next;
       ptr->next=temp;
       temp->next=NULL;
    }else {
        q=temp->next;
        temp->next=ptr->next;
        ptr->next=q;
        q=ptr->next->next;
        ptr->next->next=temp->next->next;
        temp->next->next=q;
    }
    
    
    return head;
}
