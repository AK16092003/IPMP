struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    map<int , int> freq;
    while(head1!=NULL)
    {
        freq[head1->data]++;
        head1 = head1->next;
    }
    
    while(head2!=NULL)
    {
        freq[head2->data]++;
        head2 = head2->next;
    }
    
    struct Node *head = new Node(0);
    struct Node *hh = head;
    for(auto k : freq)
    {
        head->next = new Node(k.first);
        head = head->next;
    }
    return hh->next;
    
}
