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
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(INT_MIN);
        ListNode* node = dummy;
        while(l1 && l2){
            if(l1->val<l2->val){
                node->next = l1;
                l1 = l1->next;
            }else{
                node->next = l2;
                l2 = l2->next;
            }
            node = node->next;
        }
        if(l1) node->next = l1;
        if(l2) node->next = l2;
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        int n = lists.size();
        while(n>1){
            int k = (n+1)/2;
            for(int i=0;i<n/2;i++){
                lists[i] = merge(lists[i], lists[i+k]);
            }
            n=k;
        }
        return lists[0];
    }
};
