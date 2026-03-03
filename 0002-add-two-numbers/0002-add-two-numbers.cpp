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
        int sum = 0;
        while(l1!=NULL || l2!=NULL){
            if(l1==NULL) sum = l2->val + carry;
            if(l2 == NULL) sum=  l1->val + carry;
            if(l1!=NULL && l2!=NULL)sum = l1->val + l2->val + carry;
            ListNode* newNode= new ListNode(sum%10);
            
            carry = sum/10;
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