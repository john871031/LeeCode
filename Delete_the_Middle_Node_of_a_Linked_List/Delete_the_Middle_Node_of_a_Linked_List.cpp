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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        if(head->next==nullptr) return nullptr;
        ListNode* pre = head;
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;

        while(fast && fast->next){
            pre = pre->next;
            slow = slow->next;
            fast = fast->next->next;
        }
        pre->next = slow->next;

        return dummy->next;
    }
};
