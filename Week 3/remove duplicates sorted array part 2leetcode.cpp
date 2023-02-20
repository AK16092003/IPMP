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
    
    ListNode* deleteDuplicates(ListNode* head) 
    {
        
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;

        ListNode *pre = NULL;
        ListNode *hh  = NULL , *ph = NULL;
        ListNode *curr = head;
        ListNode *next = curr->next;

        while(curr != NULL)
        {
            int count = 0;
            next = curr->next;
            if(pre == NULL || pre->val != curr->val) count++;
            if(next == NULL || next->val != curr->val) count++;
        
            if(count == 2)
            {
                if(hh == NULL)
                {
                    hh = curr;
                    hh->next = NULL;
                    ph = curr;
                }
                else
                {
                    ph->next = curr;
                    curr->next = NULL;
                    ph = curr;
                }
            }

            pre = curr;
            curr = next;
        }

        return hh;
    }
};
