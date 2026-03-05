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
    ListNode* sortList(ListNode* head) {
        if(head == NULL|| head->next == NULL) return head;

        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);

        return merge(left, right);
        
    }

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* l1, ListNode* r1){
        ListNode* dummynode = new ListNode(0);
        ListNode* tmp = dummynode;

        while(l1!=NULL && r1!=NULL){
            if(l1->val < r1->val){
                tmp->next = l1;
                l1= l1->next;
            }else{
                tmp->next = r1;
                r1=r1->next;
            }
            tmp = tmp->next;
        }
        if(l1 ==NULL) tmp->next = r1;
        if(r1 ==NULL) tmp->next = l1;

        return dummynode->next;

    }
};