//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends

/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        if(n==0) return false;
        
        Node* temp = head;
        
        for(int i=0;i<n;i++){
            if(temp-> data == key) return true;
            
            temp = temp->next;
        }
        
        return false;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i) {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        int key;
        cin >> key;
        Solution ob;
        cout << (ob.searchKey(n, head, key) ? "true" : "false") << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends