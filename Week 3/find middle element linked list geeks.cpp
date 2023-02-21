class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node *p = head , *q = head;
        while(q!=NULL)
        {
            q = q->next;
            if(q == NULL) break;
            q = q->next;
            p = p->next;
        }
        return p->data;
    }
};
