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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next==NULL) return head;
        ListNode* tail = head;
        int count = 1;
        while(tail->next!=NULL) {
            tail = tail->next;
            count++;
        }
        tail->next = head;

        int idx = count -(k%count)-1;
        while(idx>0){
            head = head->next;
            idx--;

        }
        ListNode*res = head->next;
        head->next= NULL;
        return res;
          
    }

};