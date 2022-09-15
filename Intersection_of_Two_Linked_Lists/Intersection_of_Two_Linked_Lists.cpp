/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmpA = headA;
        ListNode *tmpB = headB;
        int countA=1;
        int countB=1;
        while(tmpA!=0){
            tmpA = tmpA->next;
            countA++;
        }
        while(tmpB!=0){
            tmpB = tmpB->next;
            countB++;
        }
        while(countA>countB){
            headA = headA->next;
            countA--;
        }
        while(countA<countB){
            headB = headB->next;
            countB--;
        }
        while(headA!=0){
            if(headA==headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};
