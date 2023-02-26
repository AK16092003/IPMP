class Solution{
public:
    Node* divide(int N, Node *head)
    {
        // code here
        Node *e = new Node(0);
        Node *o = new Node(0);
        
        Node *a = e , *b = o;
        
        while(head!=NULL)
        {
            if((head->data)%2 == 0)
            {
                e->next = head;
                e = e->next;
                head = head->next;
                e->next =NULL;
            }
            else if((head->data)%2 == 1)
            {
                o->next = head;
                o = o->next;
                head = head->next;
                o->next =NULL;
            }
        }
        e->next = b->next;
        return a->next;
    }
};
