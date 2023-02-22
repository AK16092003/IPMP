class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        
        Node *zero , *one , *two;
        zero = new Node(0);
        one  = new Node(0);
        two  = new Node(0);
        Node *zerod = zero , *oned = one , *twod = two;
        Node * curr = head;
        Node * pre = NULL;
        head = zero;
        
        while(curr != NULL)
        {
            //cout << curr->data<<" ";
            if(curr->data == 0)
            {
                zero->next = curr;
                zero = zero->next;
            }
            if(curr->data == 1)
            {
                one->next = curr;
                one = one->next;
            }
            if(curr->data == 2)
            {
                two->next = curr;
                two = two->next;
            }
            
            pre = curr;
            curr = curr->next;
            pre->next = NULL;
        }
        //return head;
        zero->next = (oned->next != NULL? oned->next : twod->next);
        one->next = (twod->next != NULL ?twod->next : NULL);
        return head->next;
    }
    
