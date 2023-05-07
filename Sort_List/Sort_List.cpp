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
    ListNode* mergesort(ListNode* l1, ListNode* l2){
        ListNode* start = new ListNode(INT_MIN);
        ListNode* cur = start;
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                cur->next = l1;
                l1 = l1->next;
            }else{
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1!=NULL){
            cur->next = l1;
        }
        if(l2!=NULL){
            cur->next = l2;
        }
        return start->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!(head) || !(head->next)) return head;
        ListNode* tmp = head;
        ListNode* slow = head;
        ListNode* fast = head;
        //find middle point
        while(fast!=NULL && fast->next!=NULL){
            tmp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        tmp->next = NULL;
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);

        return mergesort(l1, l2);
    }
};
