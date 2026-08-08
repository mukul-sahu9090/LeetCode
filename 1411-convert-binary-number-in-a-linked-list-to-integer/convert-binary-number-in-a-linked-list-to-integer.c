/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int decimal = 0;
    while (head != NULL) {
        decimal = decimal * 2 + head->val;   // seedha binary-to-decimal, ek hi pass mai
        head = head->next;
    }
    return decimal;
    
}