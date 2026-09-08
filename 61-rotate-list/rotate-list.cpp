/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        ListNode* ptr=head;
        ListNode* temp=head;
        ListNode* temp2=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int n=k%count;
        for(int i=0;i<n;i++){
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            if(temp2->next==NULL){
                return head;
            }
            while(temp2->next!=ptr){
                temp2=temp2->next;
            }
            ptr->next=head;
            temp2->next=NULL;
            head=ptr;
            temp2=head;
        }
        return head;
        
    }
};