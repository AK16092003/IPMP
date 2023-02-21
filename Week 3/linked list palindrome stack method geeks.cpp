
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *p = head;
        stack<int> stk;
        while(p !=NULL)
        {
            stk.push(p->data);
            p = p->next;
        }
        
        p = head;
        while(p!=NULL)
        {
           // cout << p->data << " " << stk.top() << endl;
            if(p->data != stk.top()) return false;
            stk.pop();
            p = p->next;
        }
        return true;
    }
};
