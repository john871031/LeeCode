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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small_head = NULL;
        ListNode* big_head = NULL;
        ListNode* tmp_small = NULL;
        ListNode* tmp_big = NULL;
        int first=1;
        int second=1;
        // if(head==NULL || head->next==NULL) return head;
        while(head!=NULL){
            // cout<<head->val<<endl;
            if((head->val) < x){
                if(first==1){
                    tmp_small = head;
                    head = head->next;
                    small_head = tmp_small;
                    tmp_small->next = NULL;
                    first = 0;
                }else{
                    tmp_small->next = head;
                    head = head->next;
                    tmp_small = tmp_small->next;
                    // cout<<"1: "<<tmp_small->val<<endl;
                    tmp_small->next = NULL;
                }
            }
            else{
                if(second==1){
                    tmp_big = head;
                    head = head->next;
                    big_head = tmp_big;
                    tmp_big->next = NULL;
                    second = 0;
                }else{
                    tmp_big->next = head;
                    // cout<<head->val<<endl;
                    head = head->next;
                    tmp_big = tmp_big->next;
                    // cout<<"2: "<<tmp_big->val<<endl;
                    tmp_big->next = NULL;
                    // cout<<head->val<<endl;
                }
            }
            
        }
        // cout<<'a'<<endl;
        if(small_head==NULL) return big_head;
        // cout<<'b'<<endl;
        tmp_small->next = big_head;
        return small_head;
    }
};
