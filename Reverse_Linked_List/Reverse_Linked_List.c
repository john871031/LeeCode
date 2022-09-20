/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(head==0 || head->next==0) return head;
    struct ListNode* ans = 0;
    struct ListNode* current = head;
    struct ListNode* next = 0;
    while(current!=NULL){
        next = current->next;
        current->next = ans;
        ans = current;
        current = next;
    }
    return ans;
}
