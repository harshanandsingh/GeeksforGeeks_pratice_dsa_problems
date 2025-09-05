/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        // main two edge case -> 
        // 1st -> p is >= size of linked list 
        // 2nd -> p is the last element 
        
        Node* temp = head;
        
        int i = 0;
        while(i<p && temp){
            i++;
            temp = temp->next;
        }
        
        // now edge case 1 -> p is > size 
        if(i<p || !temp) return head;
        
        Node* new_node = new Node(x);
        
        // edge case 2 
        if(!temp->next){
            temp->next = new_node;
            new_node->prev = temp;
            return head;
        }
        
        new_node->next = temp->next;
        temp->next->prev = new_node;
        temp->next = new_node;
        new_node->prev=temp;
        return head;
        
        
    }
};