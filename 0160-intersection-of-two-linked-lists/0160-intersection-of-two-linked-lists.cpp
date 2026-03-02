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
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* tmp1 = headA;
        ListNode* tmp2 = headB;
        while(tmp1 != tmp2){
            if(tmp1==NULL) tmp1 = headB;
            if(tmp2==NULL) tmp2 = headA;
            if(tmp1 == tmp2) return tmp1;
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        return tmp1;
        
        

        
    }
};