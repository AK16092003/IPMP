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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return head;

        ListNode *a , *b , *c , *d;
        ListNode *ans = head->next;

        if(head->next == NULL) return head;
        if(head->next->next == NULL)
        {
            head->next->next = head;
            head->next = NULL;
            return ans;
        }
        if(head->next->next->next == NULL)
        {
            a = head;
            b = a -> next;
            c = b->next;
            b->next = a;
            a->next = c;
            c->next = NULL;
            return b;
        }

        a = head;
        b = a->next;
        c = b->next;
        d = c->next;

        while(c != NULL)
        {
            head = head->next->next;
            ListNode *a1 = c , *b1 = d ;
            ListNode *c1 = d->next ;
            if(c1 ==NULL)
            {
                b -> next = a;
                a -> next = d;
                d -> next = c;
                c -> next = NULL;
                break;
            }
            ListNode *d1 = d->next->next;
            if(d1 == NULL)
            {
                b -> next = a;
                a -> next = d;
                d -> next = c;
                c -> next = c1;
                c1 -> next = NULL;
                break;
            }

            b -> next = a;
            a -> next = d;
            d -> next = c;
            a = a1;
            b = b1;
            c = c1;
            d = d1;
        }
        return ans;
    }
};
