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
    bool hasCycle(ListNode* head) {
        if(!head)
        {
            return false;
        }
        ListNode* nexthead=head->next;
        while(head and nexthead and nexthead->next)
        {
            if(head==nexthead)
            {
                return true;
            }
            nexthead=nexthead->next->next;
            head=head->next;
        }
   return false;
    }
};
