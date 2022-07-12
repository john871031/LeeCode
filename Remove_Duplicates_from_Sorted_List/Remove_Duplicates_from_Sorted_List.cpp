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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return 0;
        
        ListNode *previous = 0;
        ListNode *current = head;
        ListNode *preceding = head->next;
        
        int dup = -101;
        while(preceding!=0){
            if(dup==current->val){
                current = current->next;
                previous->next = preceding;
                preceding = current->next;
            }else{
                dup = current->val;
                cout<<dup;
                previous = current;
                current = current->next;
                preceding  = current->next;
            }
        }
        if(dup==current->val) previous->next = 0;
        return head;
    }
};
