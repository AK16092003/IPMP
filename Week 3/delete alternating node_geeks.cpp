void deleteAlt(struct Node *head){
    // Code here
    struct Node *p = head;
    while(p!=NULL && p->next!=NULL)
    {
        p->next = p->next->next;
        p = p->next;
    }
}
