/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        ListNode* one = head;
        ListNode* two = head;
        while(two && two->next){
            one = one->next;
            two = two->next->next;
            if(one==two) return true;
        }
        return false;
    }
};
