class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node *cur;
    bool ok = true;
    
    void checkreverse(Node *p)
    {
        if(p->next == NULL)
        {
            ok &= (cur->data == p->data);
            cur = cur->next;
            return ;
        }
        
        checkreverse(p->next);
        ok &= (cur->data == p->data);
        cur = cur->next;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        cur = head;
        checkreverse(head);
        return ok;
        
    }
    
    
};
