
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *p = head;
        Node *m = head;
        
        while(p!=NULL)
        {
            p = p->next;
            if(p == NULL)break;
            m = m->next;
            p = p->next;
        }
        
        Node *cur = m->next , *next = NULL , *pre = m;
        while(cur != NULL)
        {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        m->next = NULL;
        Node *last = pre , *first = head;
        while(first != NULL && last != NULL)
        {
            if(first->data != last->data) return false;
            first = first->next;
            last = last->next;
        }
        return true;
    }
};
