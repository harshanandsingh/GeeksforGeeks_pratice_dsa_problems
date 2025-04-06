//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Initial template for C++

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int length_of_linklist(Node* head){
        if(head == nullptr) return 0;
        
        int count=0;
        while(head != nullptr){
            count++;
            head = head -> next;
        }
        return count;
    }
    int getMiddle(Node* head) {
        // code here
        int n = length_of_linklist(head);
        
        if(n == 0 ) return -1;
        
        int mid;
        
        if(n&1) mid=(n+1)/2;
        else mid = n/2 + 1;
        
        Node* temp = head;
        for(int i=0;i<mid-1;i++){
            temp = temp->next;
        }
        return temp->data;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

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
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getMiddle(head) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends