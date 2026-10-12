/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL){
            return head ;
        }
        Node* ptr=head;
        while(ptr!=NULL){
            if(ptr->child!=NULL){
                Node* next=ptr->next;
                ptr->next=flatten(ptr->child);
                ptr->next->prev=ptr;
                ptr->child=NULL;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=next;
                if(next!=NULL){
                    next->prev=ptr;
                }
               
            }
            else{
                ptr=ptr->next;
            }
        }
        return head;   
    }
};