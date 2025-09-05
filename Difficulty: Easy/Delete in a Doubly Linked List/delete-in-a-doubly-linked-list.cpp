/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
        // edge case -> x > size retrn head 
        
        if(!head) return head;
        
        // if x = 1 -> so then we need to have a new head 
        if(x == 1){
            Node* temp = head;
            head = head->next;
            if(head){
                head->prev = nullptr;
            }
            delete temp;
            return head;
        }
        
        int i = 1;
        Node* temp = head;
        while(i<x-1){
            temp = temp->next;
            i++;
        }
        // now we have the index of the node previous to the node we have to detete 
        Node* delete_node = temp->next;
        
        if(!delete_node) return head;
        
        temp->next = delete_node->next;
        if(temp->next){
            temp->next->prev = temp;
        }
        delete delete_node;
        return head;
        
        
    }
};