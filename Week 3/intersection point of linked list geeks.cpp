int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *last = head1;
    int len = 1;
    
    while(last->next != NULL)
    {
        len++;
        last = last->next;
    }
    
    last->next = head1;
    Node *p = head2 , *q = head2;
    for(int i = 0 ;i < len ; i ++ )
    {
        q=q->next;
        if(q == NULL) return -1;
    }
    while(p!=q)
    {
        p = p->next;
        q = q->next;
        if(q == NULL) return -1;
        
    }
    
    last->next = NULL;
    return p->data;
}
