class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        struct node *a = head , *c = NULL;
        if(head == NULL || head->next == NULL) return head;
        struct node *b = head->next;
        a->next = NULL;
        
        for(int i = 0 ; i < k-1  ; i ++)
        {
            if(b == NULL) break;
            c = b->next;
            b->next = a;
            a = b;
            b = c;
        }
        
        head->next = reverse(b , k);
        return a;    
    }
};
