class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) 
    {
        
        ListNode *q = head;
        int n = 0;
        while(q!=NULL){q = q->next;n++;}

        if(k > n/2)k = n - k;

        ListNode *p = head;
        for(int i = 0; i < k-1 ; i ++)
        {
            p = p->next;
        }


        ListNode *r = p;
        for(int i = k-1; i < n-k ; i ++)
        {
            r = r->next;
        }
        swap(p->val , r->val);
        return head;
    }
};
