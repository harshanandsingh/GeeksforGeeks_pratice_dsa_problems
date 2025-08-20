// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node *head = nullptr;
        Node *pre = nullptr;
        
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            Node* new_node = new Node(arr[i]);
            if(i==0){
                head = new_node;
                pre = new_node;
            }
            else{
                new_node->prev = pre;
                pre->next = new_node;
                pre = new_node;
            }
            
        }
        return head;
    }
};