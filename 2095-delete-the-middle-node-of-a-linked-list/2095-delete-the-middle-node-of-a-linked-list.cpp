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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL) return head;
        if(head->next == NULL) return NULL;
        ListNode* tmp1 = head;
        ListNode* tmp2 = head;
        while(tmp2->next!= NULL && tmp2->next->next!=NULL){
            tmp1 = tmp1->next;
            tmp2=tmp2->next->next;
        }
        if(tmp2->next!=NULL){
            ListNode* tmp = tmp1->next;
            tmp1->next = tmp->next;
            tmp->next = NULL;
            delete tmp;
        }else{
            ListNode* prev = head;
            while(prev->next!=tmp1){
                prev=prev->next;
            }
            prev->next = tmp1->next;
            tmp1->next = NULL;
            delete tmp1;
        }
        return head;

        
    }
};