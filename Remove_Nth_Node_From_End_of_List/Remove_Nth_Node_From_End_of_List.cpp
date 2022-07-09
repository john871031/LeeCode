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
    ListNode* reverse(ListNode* head){
        ListNode *previous = 0;
        ListNode *current = head;
        ListNode *preceding = head->next;
        while(preceding!=0){
            current->next = previous;
            previous = current;
            current = preceding;
            preceding = preceding->next;
        }
        current->next = previous;
        return current;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *rev=0;
        
        if(head->next==0) return rev;
        rev = reverse(head);
        
        ListNode *previous = 0;
        ListNode *current = rev;
        ListNode *preceding = rev->next;
        
        if(n!=1){
            for(int i=0;i<n-1;i++){
                previous = current;
                current = current->next;
                preceding = current->next;
            }
            previous->next = preceding;
        }else{
            rev = rev->next;
        }
        
        rev = reverse(rev);
        
        return rev;
    }
};
