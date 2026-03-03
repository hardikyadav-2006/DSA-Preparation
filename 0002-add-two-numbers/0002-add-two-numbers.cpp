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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;
        
        while(l1!=NULL || l2!=NULL){
            int val1 =(l1==NULL)? 0:l1->val;
            int val2 =(l2==NULL)? 0:l2->val;
            
            int sum = val1 + val2 + carry;
            carry = sum/10;
            ListNode* newNode= new ListNode(sum%10);
            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;

            if(head == NULL) head = tail = newNode;
            else{
                tail->next = newNode;
                tail=newNode;
            }
        }
        if(carry == 1){
            ListNode* newNode= new ListNode(1);
            tail->next = newNode;


        }
        return head;
        
    }
};