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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head ->next == NULL || head->next->next == NULL) return head;
        ListNode* even = head->next;
        ListNode* odd = head;
        ListNode* even_head = head->next;
        ListNode* odd_head = head;
        ListNode* tmp = head->next->next;
        int count = 1;
        while(tmp!=NULL){
            if(count%2!=0){
                odd->next = tmp;
                odd = tmp;
            }
            else{
                even->next = tmp;
                even = tmp;
            }
            count++;
            tmp = tmp->next;
        }
        odd->next = even_head;
        even->next = NULL;
        return odd_head;


        
    }
};