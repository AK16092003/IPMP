
void alternatingSplitList(struct Node* head) 
{
    //Your code here
    a = new Node(0);
    b = new Node(0);
    Node *c = a , *d = b;
    int count = 0;
    
    while(head!=NULL)
    {
        if(count%2 == 0)
        {
            c->next = new Node(head->data);
            c = c->next;
        }
        else
        {
            d->next = new Node(head->data);
            d = d->next;
        }
        head = head->next;
        count++;
    }
    a = a->next;
    b = b->next;
    
}
