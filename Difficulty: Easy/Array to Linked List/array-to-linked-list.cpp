/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        // code here
        Node* head = nullptr;
        Node* pre = nullptr;
        
        int n = arr.size();
        
        for(int i =0;i<n;i++){
            Node* new_node = new Node(arr[i]);
            
            if(i==0){
                head=new_node;
                pre = new_node;
            }
            else{
                pre->next = new_node;
                pre = new_node;
            }
        }
        return head;
        
    }
};