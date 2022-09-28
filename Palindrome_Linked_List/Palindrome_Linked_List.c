/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int linklen(struct ListNode* node){
    int len=0;
    while(node){
        node = node->next;
        len++;
    } 
    return len;
}
bool isPalindrome(struct ListNode* head){
    if(head==0 || head->next==0) return true;
    int len;
    struct ListNode* pre = NULL;
    struct ListNode* current = head;
    struct ListNode* next = NULL;

    len = linklen(head);
    int mid = len/2;
    while(mid--){       //reverse until mid
        next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    if(len%2!=0) current = current->next;
    while(current){
        if(current->val!=pre->val) return false;
        current = current->next;
        pre = pre->next;
    }
    return true;
}
