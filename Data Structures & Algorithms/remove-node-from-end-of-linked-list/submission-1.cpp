class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int count = 0;

        while(temp != nullptr)
        {
            count++;
            temp = temp->next;
        }

        int ele_indx = count - n;

        if(ele_indx == 0)
        {
            return head->next;
        }

        temp = head;

        ListNode dummy(-1);
        ListNode* prev = &dummy;
        prev->next = head;

        while(ele_indx--)
        {
            prev = head;
            head = head->next;
        }

        prev->next = head->next;

        return temp;
    }
};