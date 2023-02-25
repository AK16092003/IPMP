Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node*tmp = new Node(0);
    Node *ans = tmp;
    while(head1!=NULL || head2!=NULL)
    {
        if(head2 == NULL || (head1 != NULL && head1->data < head2->data))
        {
            tmp->next = head1;
            tmp = tmp->next;
            head1 = head1->next;
        }
        else
        {
            tmp->next = head2;
            tmp = tmp->next;
            head2 = head2->next;
        }
    
    }
    return ans->next;
}  
