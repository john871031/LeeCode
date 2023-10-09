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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !(head->next) || !(head->next->next)) return head;
        int cur = 0;
        ListNode* node = head;
        ListNode* even = node->next;
        ListNode* head_even = even;
        node->next = even->next;
        node = node->next;
        even->next = nullptr;
        // cout<<node->val<<' '<<even->val<<endl;
        if(!(node->next)){
            node->next = even;
            return head;
        }
        while(node->next->next){
            // cout<<node->val<<' '<<even->val<<endl;
            even->next = node->next;
            even = even->next;
            node->next = even->next;
            even->next = nullptr;
            node = node->next;
            // cout<<node->val<<' '<<even->val<<endl;
            if(!(node->next)) break;
        }
        if(!(node->next)){
            node->next = head_even;
        }else{
            even->next = node->next;
            even = even->next;
            node->next = head_even;
            even->next = nullptr;
        }
        return head;
    }
};
