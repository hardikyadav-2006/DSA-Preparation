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
    bool isPalindrome(ListNode* head) {
        bool pal = true;
        stack<int> s;
        int count = 0;
        ListNode* tmp = head;
        while(tmp!= NULL){
            tmp=tmp->next;
            count++;
        }
        tmp = head;
        if(count%2 == 0){
            for(int i = 0; i<count/2; i++){
                s.push(tmp->val);
                tmp = tmp->next;
            }
            for(int i = 0; i<count/2; i++){
                if(s.top()!=tmp->val) return false;
                s.pop();
                tmp = tmp->next;
            }
            pal = true;
        }
        if(count%2 != 0){
            for(int i = 0; i<count/2; i++){
                s.push(tmp->val);
                tmp = tmp->next;
            }
            tmp=tmp->next;
            for(int i = 0; i<count/2; i++){
                if(s.top()!=tmp->val) return false;
                s.pop();
                tmp = tmp->next;
            }
            pal = true;

        }
        if(pal) return true;
        return false;
        
    }
};