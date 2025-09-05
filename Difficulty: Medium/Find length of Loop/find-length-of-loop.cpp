/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        if(!head) return 0;
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        
        if(!fast || !fast->next) return 0;
        
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        int i=0;
        do{
            i++;
            slow = slow->next;
        }while(slow != fast);
        return i;
        
    }
};