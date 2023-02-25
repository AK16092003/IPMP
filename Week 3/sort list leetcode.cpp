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
    void print(ListNode *p){
        while(p!=NULL)
        {
            cout << p->val << " ";
            p = p->next;
        }
        cout << endl;
    }
    ListNode* sortList(ListNode* head) {
        
        // merge sort
        
        /*
            split into 2 halfs
            sort both recursively
            merge both linked list and return head pointer
        */

        if(head == NULL || head->next == NULL) return head;

        ListNode *a = head , *b = head;
        while(b!=NULL)
        {
            b = b->next;
            if(b == NULL) break;
            b = b->next;
            if(b == NULL) break;
            a = a->next;
        }

        ListNode *p = head , *q = a->next;
        a->next = NULL;
        //print(p); print(q);
        p = sortList(p);
        q = sortList(q);

        ListNode *tmp;
        tmp = new ListNode(0);
        head = tmp;
        while(p!=NULL || q!=NULL)
        {
            if(q == NULL || (p!=NULL && p->val < q->val))
            {
                tmp->next = p;
                tmp = tmp->next;
                if(q == NULL) break;
                p = p->next;
            }
            else
            {
                tmp->next = q;
                tmp = tmp->next;
                if(p == NULL) break;
                q = q->next;
            }
        }
        //tmp->next = NULL;
        return head->next;
    }
};
