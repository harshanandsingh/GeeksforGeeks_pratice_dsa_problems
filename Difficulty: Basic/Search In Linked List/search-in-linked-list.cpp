//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

bool searchLinkedList(struct Node* head, int x);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        int x; cin >> x;
        cout << searchLinkedList(head, x) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


//User function Template for C++


/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};
*/
bool searchLinkedList(Node *head, int x)
{
    //Your code here
    if(head == nullptr) return false;
    
    Node* temp = head;
    
    while(temp!= nullptr){
        if(temp->data == x ) return true ;
        temp= temp->next;
    }
    return false;
}