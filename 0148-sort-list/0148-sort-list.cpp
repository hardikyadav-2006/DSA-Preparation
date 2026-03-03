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
    ListNode* sortList(ListNode *head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* mid = getMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(head);
        right = sortList(right);
        return merge(left, right);

    }

    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode * dummynode = new ListNode(-1);
        ListNode* tmp = dummynode;

        while(left!=NULL && right!=NULL){


            if(left->val < right->val){
                tmp ->next = left;
                tmp = left;
                left = left->next;
            }else{
                tmp->next = right;
                tmp = right;
                right = right->next;

            }
            

        }
        if(left!=NULL) tmp->next = left;
        else tmp->next = right;

        return dummynode->next;
        
    }
};