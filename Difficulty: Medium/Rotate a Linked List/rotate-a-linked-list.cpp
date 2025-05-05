//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

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

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        if(head == nullptr) return head;
        int n = 0;
        Node* temp = head;
        while(temp){
            n++;
            temp = temp->next;
        }
        
        k = k%n;
        if(k==0) return head;
        //cout<<n<<" "<<k<<endl;
        Node* curr = head;
        Node* prev = nullptr;
        int i=1;
        while(i<=k){
            prev = curr;
            //cout<<curr->data<<endl;
            curr = curr->next;
            //cout<<curr->data<<endl;
            i++;
        }
        //curr->next = head;
        prev->next = nullptr;
        Node* new_head = curr;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = head;
        return new_head;;
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

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
        cout << "~\n";
    }
    return 1;
}

// } Driver Code Ends