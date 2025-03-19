//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x)
        : data(x)
        , next(nullptr) {}
};

void printList(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// } Driver Code Ends

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        // if (!head) return nullptr; // Edge case: Empty list
        
        // Node* i ,*j;
        // i=j=head;
        // while(i->next){
        //     j=i;
        //     while(j->next){
        //         if(i->data == j->next->data){
        //             Node* temp = j->next;
        //             j->next = temp->next;
        //             delete(temp);
                    
        //         }
        //         else j=j->next;
        //     }
        //     i=i->next;
        // }
        // return head;
        
        unordered_set<int>s;
        
        Node* current = head;
        
        Node* prev = nullptr;
        
        while(current){
            if(s.find(current->data) != s.end()){
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
            else{
                s.insert(current->data);
                prev= current;
                current = current->next;
                
            }
        }
        return head;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << "empty" << endl;
            continue;
        }

        Node *head = new Node(arr[0]);
        Node *tail = head;

        for (size_t i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        Node *result = ob.removeDuplicates(head);
        printList(result);
    }

    return 0;
}

// } Driver Code Ends