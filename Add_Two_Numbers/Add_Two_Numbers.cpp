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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        if(l1==0){
            return l1;
        }else if(l2==0){
            return l2;
        }
        ListNode *list = new ListNode();
        ListNode *first = new ListNode();
        first = list;
        while(l1!=0 && l2!=0){
            list->val = l1->val + l2->val + carry;
            if(list->val > 9){
                list->val = list->val % 10;
                carry = 1;
            }else{
                carry = 0;
            }
            l1 = l1->next;
            l2 = l2->next;
            if(l1==0 && l2==0 && carry==0){
                break;
            }
            list->next = new ListNode();
            list = list->next;
        }
        while(l1!=0){
            list->val = l1->val + carry;
            if(list->val > 9){
                list->val = list->val % 10;
                carry = 1;
            }else{
                carry = 0;
            }
            l1 = l1->next;
            if(l1==0 && carry==0){
                break;
            }
            list->next = new ListNode();
            list = list->next;
        }
        while(l2!=0){
            list->val = l2->val + carry;
            if(list->val > 9){
                list->val = list->val % 10;
                carry = 1;
            }else{
                carry = 0;
            }
            l2 = l2->next;
            if(l2==0 && carry==0){
                break;
            }
            list->next = new ListNode();
            list = list->next;
        }
        if(carry==1){
            list->val += carry;
        }
        return first;
    }
};
