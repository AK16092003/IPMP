#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to reverse a linked list.
    
    struct Node* reverseList(struct Node *p)
    {
        // code here
        // return head of reversed list
        stack<int>stk;
        struct Node *head = p;
        while(head!=NULL)
        {
            stk.push(head->data);
            head = head->next;
        }
        
        head = p;
        while(head!=NULL)
        {
            head->data = stk.top();
            stk.pop();
            head = head->next;
        }
        return p;
    
    }
    
};
    
