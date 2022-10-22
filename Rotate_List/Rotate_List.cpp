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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        ListNode* tmp = head;
        int count=1;
        int step;
        while(tmp->next){
            tmp = tmp->next;
            count++;
        }
        tmp->next = head;
        step = k%count;
        step = count-step;
        while(step){
            tmp = tmp->next;
            step--;
        }
        head = tmp->next;
        tmp->next = NULL;
        return head;
    }
};
