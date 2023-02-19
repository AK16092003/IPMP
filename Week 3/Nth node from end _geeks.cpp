
int getNthFromLast(Node *head, int n)
{
       // Your code here
       struct Node *p = head , *q = head;
       for(int i = 0 ; i < n-1 ; i ++) 
       {
            q = q->next;
            if(q == NULL) return -1;
       }
       while(q->next!=NULL)
       {
           q = q->next;
           p = p->next;
       }
       return p->data;
}
