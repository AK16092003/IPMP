class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node *p = head , *q = head;
        p = p->next;
        if(p == NULL) return false;
        q = q->next->next;
        
        while(q!=NULL)
        {
            if(p == q) return true;
            q = q->next;
            if(q == NULL) break;
            p = p->next;
            q = q->next;
        }
        return false;
    }
};
