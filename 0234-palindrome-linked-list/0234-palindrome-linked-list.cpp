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
        ListNode* slow = head;
        ListNode* fast = head;
        s.push(slow->val);
        while(fast->next!=NULL && fast->next->next!=NULL){\
            slow=slow->next;
            fast=fast->next->next;
            s.push(slow->val);
        }
        if(!(fast->next!=NULL)) s.pop();
        while(slow->next!=NULL){
            slow=slow->next;
            if(slow->val!=s.top()) return false;
            s.pop();
        }
        return true;

    }
};