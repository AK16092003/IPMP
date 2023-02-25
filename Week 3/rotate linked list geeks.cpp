class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *p = head;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next = head;
        
        Node *q = head , *pre = NULL;
        for(int i= 0 ; i < k ; i ++)
        {
            pre = q;
            q =  q->next;
        }
        pre->next = NULL;
        return q;
    }
};
