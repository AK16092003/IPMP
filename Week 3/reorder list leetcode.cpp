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
    void reorderList(ListNode* head) {

        int n = 0;
        ListNode *mid = head , *end = head;
        while(end->next != NULL)
        {
            end = end->next;
            if(end->next == NULL)
            {
                break;
            }
            mid = mid->next;
            end = end->next;
        }

        ListNode *cur = mid->next , *next = NULL , *pre = mid;
        while(cur != NULL)
        {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }

        ListNode *x = head , *y = end;
        ListNode *x1 = NULL , *y1 = NULL;

        while(x != mid)
        {
            x1 = x ->next;
            x->next = y;
            y1 = y->next;
            y->next = x1;
            x = x1;
            y = y1;
        }
        if(x != y)
        mid->next->next = NULL;
        else
        mid->next = NULL;
        //return head;
    }
};
