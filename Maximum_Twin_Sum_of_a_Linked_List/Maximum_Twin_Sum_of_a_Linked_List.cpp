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
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* slow = head;
        ListNode* fast = head;
        if(!head->next->next) return head->val + head->next->val;

        while(fast && fast->next){
            v.push_back(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        int cur = v.size()-1;
        int ans = INT_MIN;
        while(slow){
            v[cur] += slow->val;
            ans = max(ans, v[cur--]);
            slow = slow->next;
        }
        return ans;
    }
};
