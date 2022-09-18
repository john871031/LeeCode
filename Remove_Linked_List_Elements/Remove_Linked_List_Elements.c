/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    
    if(head==NULL) return NULL;
    if(head->val==val) return removeElements(head->next, val);
    struct ListNode* tmp = head;

    while(tmp->next!=NULL){
        if(tmp->next->val==val){
            tmp->next = tmp->next->next;
        }else{
            tmp = tmp->next;
        }

    }
    return head;
}
