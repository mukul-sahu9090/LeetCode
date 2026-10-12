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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return head;
        }
        int count=0;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode*post;
        while(curr!=NULL && curr->next!=NULL){
            post=curr->next;
            // if(post==NULL){
            //     return head;
            // }
            if(prev!=NULL){
                prev->next=post;
            }
            curr->next=post->next;
            post->next=curr;
            if(count==0){
                head=post;
            }
            prev=curr;
            curr=curr->next;
            count++;
        }
        return head;
        
    }
};