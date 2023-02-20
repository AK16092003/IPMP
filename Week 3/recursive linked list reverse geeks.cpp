class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node *head;
    
    struct Node* reverseList(struct Node *p)
    {
        // code here
        // return head of reversed list
        solve(p);
        p->next = NULL;
        return head;
    }
    
    struct Node *solve(struct Node *p)
    {
        if(p->next == NULL)
        {
            head = p;
            return p;
        }
        solve(p->next)->next = p;
        return p;
    }
    
};
