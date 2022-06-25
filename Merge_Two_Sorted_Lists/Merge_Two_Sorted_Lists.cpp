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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *list = new ListNode();
        ListNode *first = new ListNode();
        first = list;
        while(list1 != 0 && list2 != 0){
            if((list1->val) > (list2->val)){
                list->next = new ListNode();
                list->val = list2->val;
                list = list->next;
                list2 = list2->next;
            }else if((list1->val) < (list2->val)){
                list->next = new ListNode();
                list->val = list1->val;
                list = list->next;
                list1 = list1->next;
            }else{
                list->next = new ListNode();
                list->val = list1->val;
                list = list->next;
                list1 = list1->next;
    
                list->val = list2->val;
                if(list1==0 && list->next==0){
                    break;
                }
                list->next = new ListNode();
                list = list->next;
                list2 = list2->next;
            }
        }
        if(list1 != 0){
            list->val = list1->val;
            list->next = list1->next;
        }else if(list2 != 0){
            list->val = list2->val;
            list->next = list2->next;
        }else if((first->val == 0) && list1 == 0 && list2 == 0){
            return list1;
        }
        return first;
    }
};
