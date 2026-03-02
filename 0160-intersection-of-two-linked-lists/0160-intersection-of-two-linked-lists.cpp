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
        ListNode* tmp1 = headA;
        ListNode* tmp2 = headB;
        int countA = 1;
        int countB = 1;
        while(tmp1 != NULL){
            tmp1 = tmp1->next;
            countA++;
        }
        while(tmp2 != NULL){
            tmp2 = tmp2->next;
            countB++;
        }
        tmp1 = headA;
        tmp2 = headB;
        int diff = countB-countA;
        if(diff>=0){
            while(diff>0){
                tmp2=tmp2->next;
                diff--;
            }
        }else{
            while(diff<0){
                tmp1 = tmp1->next;
                diff++;
            }
        }
        while(tmp1!=NULL){
            if((tmp1) == (tmp2)) return tmp1;
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        return NULL;

        
    }
};