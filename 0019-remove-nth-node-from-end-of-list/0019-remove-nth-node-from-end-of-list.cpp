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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* tmp = head;
        while(tmp!=NULL){
            tmp = tmp->next;
            count++;
        }
        int idx = count-n+1;
        int i = 1;
        if(idx == 1 && count == 1)return NULL;
        if(idx == 1){
            tmp = head;
            head = head->next;
            tmp->next == NULL;
            return head;
        }
        
        tmp = head;
        for(int i = 1; i<idx-1; i++){
            tmp = tmp->next;
        }
        if(idx == count){
            tmp->next = NULL;
            
        }else{ListNode* curr = tmp->next;
        tmp->next = curr->next;
        curr->next = NULL;
        delete curr;}
        

        return head;
    }
};