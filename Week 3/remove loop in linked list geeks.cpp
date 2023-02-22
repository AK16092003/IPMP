class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        Node *p , *q;
        p = head;
        q = head;
        p = p->next;
        if(p == NULL) return;
        q = q->next->next;
        int count = 1;
        
        while(q!=NULL)
        {
            q = q->next;
            if(q == NULL) return;
            q = q->next;
            p = p->next;
            count++;
            if(p == q)
            {
                break;
            }
        }
        
        if(q == NULL)return;
        
        p = head;
        q = head;
        Node *pre = NULL;
        for(int i = 0 ; i < count ; i ++)
        {
            pre = q;
            q = q->next;
        }
        
        while(p!=q)
        {
            p = p->next;
            q = q->next;
            pre = pre->next;
        }
        pre->next = NULL;
        
    }
};
