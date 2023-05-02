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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> vec;
        ListNode* cur = head;
        ListNode* start = new ListNode(INT_MIN);
        start->next = head;
        ListNode* pre = start;
        while(cur){
            ListNode* tmp = start->next;
            ListNode* tmp_pre = start;
            cout<<cur->val<<endl;
            while((tmp->val <= cur->val) && (tmp!=cur)){
                tmp_pre = tmp;
                tmp = tmp->next;
            }
            if(tmp->val > cur->val){
                pre->next = cur->next;
                cur->next = tmp;
                tmp_pre->next = cur; 
                cur = pre->next;
            }else{
                pre = cur;
                cur = cur->next;
            }
        }
        
        return start->next;
    }
};
