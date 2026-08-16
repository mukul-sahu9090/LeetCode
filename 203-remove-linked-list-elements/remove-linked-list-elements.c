/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* ptr;
        ptr=head;
        struct ListNode* q;
        int count=0;
        while(ptr!=NULL){
            if(ptr->next!=NULL){
                q=ptr->next;
            }
            count=0;
            if(ptr->next!=NULL){
                if(q->val==val){
                    ptr->next=ptr->next->next;
                    free(q);
                    count++;
                }

            }
            if(count==0){
                ptr=ptr->next;
            }

        }
        if(head!=NULL){
            if(head->val==val){
                q=head;
                head=head->next;
                free(q);
            }

        }
        
        return head;
    
    
}