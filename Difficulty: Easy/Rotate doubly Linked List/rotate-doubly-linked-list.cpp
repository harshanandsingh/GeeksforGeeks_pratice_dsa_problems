//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};


// } Driver Code Ends

// User function Template for C++

/*
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *rotateDLL(Node *head, int p) {

        // code here..
        // if (!head || p == 0) return head; // If list is empty or no rotation is needed

        // int i=0;
        // Node* temp = head;
        // Node* newhead = nullptr;
        
        // while(temp->next != nullptr){
        //     ++i;
        //     if(i==p){
        //         newhead= temp->next;
        //     }
        //     temp = temp->next;
        // }
        
        // newhead->prev->next = nullptr;
        // newhead->prev = nullptr;
        // temp->next = head;
        // head->prev = temp;
        // head = newhead;
        // return head;
        
        
        if (!head || p == 0) return head; // If list is empty or no rotation needed

        Node* temp = head;
        int length = 1;
    
        // Find length of DLL
        while (temp->next != nullptr) {
            temp = temp->next;
            length++;
        }
    
        // If p is greater than length, reduce it using modulo
        p = p % length;
        if (p == 0) return head; // No need to rotate if p is a multiple of length
    
        temp = head;
        for (int i = 1; i < p; i++) {
            temp = temp->next;
        }
    
        Node* newhead = temp->next;
        temp->next = nullptr;
        newhead->prev = nullptr;
    
        // Move to last node
        Node* last = newhead;
        while (last->next != nullptr) {
            last = last->next;
        }
    
        last->next = head;
        head->prev = last;
    
        return newhead;
    }
};


//{ Driver Code Starts.

void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data;
        if (curr->next)
            cout << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int d;
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        // string dummy;
        // cin>>dummy;
        cin.ignore();
        Node *start = NULL, *cur = NULL;

        // Build doubly linked list
        for (int i = 0; i < arr.size(); i++) {
            Node* ptr = new Node(arr[i]);
            if (start == NULL) {
                start = ptr;
                cur = ptr;
            } else {
                cur->next = ptr;
                ptr->prev = cur;
                cur = ptr;
            }
        }

        Solution obj;
        Node* rotatedList = obj.rotateDLL(start, d);
        printList(rotatedList);
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends