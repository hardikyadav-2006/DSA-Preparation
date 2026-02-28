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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp1 = head;
        ListNode* tmp2 = head;
        while(tmp2->next!= NULL && tmp2->next->next!= NULL){
            tmp1 = tmp1->next;
            tmp2= tmp2->next->next;
        }
        if(tmp2->next == NULL){
            return tmp1;
        }else{
            return tmp1->next;
        }
        
    }
};