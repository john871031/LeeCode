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
        
        if(head==0 || head->next==0) return head;
        
        ListNode *previous = head;
        ListNode *current = head->next;
        ListNode *preceding = current->next;

        current->next = previous;
        head = current;
        previous->next = swapPairs(preceding);
        
        return head;
    }
};
