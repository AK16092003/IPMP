bool isvowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

struct Node* arrange(Node *head)
{
   //Code here
   Node *v , *c ,*a , *b;
   v = new Node(0);
   c = new Node(0);
   a = v; 
   b = c;
   
   while(head != NULL)
   {
       if(isvowel(head->data))
       {
           v->next = head;
           head = head->next;
           v = v->next;
           v->next = NULL;
       }
       else
       {
           c->next = head;
           head = head->next;
           c = c->next;
           c->next = NULL;
       }
   }
   v->next = b->next;
   return a->next;
   
}
