//{ Driver Code Starts

#include <iostream>
#include <sstream>
#include <stdio.h> // For freopen function
#include <string>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to build a linked list from input
Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);    // Read the entire line as input
    stringstream ss(input); // Use stringstream to split the input into integers
    int number;
    while (ss >> number) {
        arr.push_back(number); // Add each number to the vector
    }
    if (arr.empty()) {
        return NULL; // Return NULL if the vector is empty
    }

    // Create the head node
    Node* head = new Node(arr[0]);
    Node* tail = head;

    // Create remaining nodes
    for (size_t i = 1; i < arr.size(); i++) {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }

    return head;
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
class Solution {
  public:
    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        // code here
        if(head1 == nullptr && head2 == nullptr) return true;
        else if((head1 != nullptr && head2 == nullptr) || (head1 == nullptr && head2 != nullptr) ) return false;
        
        struct Node *temp1 = head1 , *temp2 = head2;
        
        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1->data != temp2->data) return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if((temp1!=nullptr && temp2 == nullptr) || (temp1!=nullptr && temp2 == nullptr)) return false;
        return true;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore(); // Ignore newline after reading T to use getline properly

    while (T--) {
        Node* head1 = buildList(); // Build first list from input
        Node* head2 = buildList(); // Build second list from input
        Solution ob;               // Directly create the object (no need for `new`)
        ob.areIdentical(head1, head2) ? cout << "true" << endl
                                      : cout << "false" << endl;

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends