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
    void reorderList(ListNode* head) {
        ListNode* tmp = head;
        vector<ListNode*> vec;
        int size = 0;
        while(tmp!=NULL){
            vec.push_back(tmp);
            size++;
            tmp = tmp->next;
        }
        if(size%2==0) size = size/2-1;
        else size = size/2;
        while(size>0){
            // cout<<size<<endl;
            tmp = head->next;
            head->next = vec.back();
            vec.back()->next = tmp;
            head = head->next;
            head = head->next;
            size--;
            vec.pop_back();
            vec.back()->next = NULL;
        }
    }
};
