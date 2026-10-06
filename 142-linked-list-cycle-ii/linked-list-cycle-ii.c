/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    int count=0;
    struct ListNode* slow=head;
    struct ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            count++;
            break;
        }
    }
    slow=head;
    if(count==1){
        while(fast!=slow){
            slow=slow->next;
            fast=fast->next;
        }
    }
    else{
        return NULL;
    }
    return slow;
    
}