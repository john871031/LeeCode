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
        ListNode* h1 = head;
        ListNode* pre;
        ListNode* h2 = head;
        ListNode* ans = NULL;
        int first = 1;
        int second = 1;
        // int count=0;
        unordered_map<int, int> Mymap;
        
        while(h1!=NULL){
            Mymap[h1->val]++;
            h1 = h1->next;
            // count++;
        }
        // if(count==1) return head;
        while(h2!=NULL){
            if(Mymap[h2->val]==1 && first){
                ans = h2;
                first=0;
                pre = h2;
            }else if(first==1) h2 = h2->next;
            if(ans!=NULL){
                if(Mymap[h2->val]>1){
                    h2 = h2->next;
                    pre->next = h2;
                }else{
                    pre = h2;
                    h2 = h2->next;
                }
            }
        }
        return ans;
    }
};
