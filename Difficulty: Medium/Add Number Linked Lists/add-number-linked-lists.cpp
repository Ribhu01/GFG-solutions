//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    void InsertAtTail (Node* &head, Node* &tail, int data){
        Node* newnode = new Node(data);
        
        if (head == nullptr){
            tail = newnode;
            head = newnode;
        }
        
        else {
        tail-> next = newnode;
        tail = newnode;
        }
    }
    
    Node* reverse (Node* &head){
        Node* prev = nullptr;
        Node* forward = nullptr;
        Node* current = head;
        
        while (current != nullptr){
            forward = current-> next;
            current-> next = prev;
            prev = current;
            current = forward;
        }
        head = prev;
        
        return head;
    }
   
    
    
    
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        
        num1 = reverse(num1);
        num2 = reverse(num2);
        Node* temp1 = num1;
        Node* temp2 = num2;
        
        Node* ansHead = nullptr;
        Node* ansTail = nullptr;
        int carry = 0;
        
        while (temp1 != nullptr || temp2 != nullptr || carry != 0){
            int val1 = 0;
            int val2 = 0;
            
            if (temp1 != nullptr){
                val1 = temp1-> data;
            }
            if (temp2 != nullptr){
                val2 = temp2-> data;
            }
            
            int sum = carry + val1 + val2;
            int lastdigit = sum%10;
            carry = sum/10;
            
            InsertAtTail (ansHead, ansTail, lastdigit);
            
            if (temp1 != nullptr){
                temp1 = temp1-> next;
            }
            if (temp2 != nullptr){
                temp2 = temp2-> next;
            }
        }
        
        ansHead = reverse(ansHead);
        
        while (ansHead != nullptr && ansHead->data == 0 && ansHead->next != nullptr) {
            Node* temp = ansHead;
            ansHead = ansHead->next;
            delete temp;
        }
        
        return ansHead;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends