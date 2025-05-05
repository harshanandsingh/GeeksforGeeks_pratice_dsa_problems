//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends

/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* merge(Node* a , Node* b){
        if(!a) return b;
        if(!b) return a;
        
        Node* result;
        if(a->data<b->data){
            result = a;
            result->next = merge(a->next,b);
        }else{
            result = b;
            result->next = merge(a,b->next);
        }
        return result;
    }
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        int n = arr.size();
        if(n==0) return nullptr;
        else if(n==1) return arr[0];
        
        for(int i=1;i<n;i++){
            arr[i]=merge(arr[i],arr[i-1]);
        }
        return arr[n-1];
    }
};



//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<Node*> v(n);

        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            Node* head = new Node(0);
            Node* temp = head;
            int x;
            while (ss >> x) {
                Node* newNode = new Node(x);
                temp->next = newNode;
                temp = temp->next;
            }
            v[i] = head->next;
        }

        Solution ob;
        Node* head = ob.mergeKLists(v);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends