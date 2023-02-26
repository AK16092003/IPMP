#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node * newnode(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p -> data = data;
    p -> next = NULL;
    return p;
    
}

struct node *reverse (struct node *head, int k)
{ 
        // Complete this method
        struct node *a = head , *c = NULL;
        if(head == NULL || head->next == NULL) return head;
        struct node *b = head->next;
        a->next = NULL;
        
        for(int i = 0 ; i < k-1  ; i ++)
        {
            if(b == NULL) break;
            c = b->next;
            b->next = a;
            a = b;
            b = c;
        }
        
        
        head->next = b;
        for(int i = 0 ; i < k-1 ; i ++)
        {
            if(b == NULL || b->next == NULL) break;
            b = b->next;
            if(b == NULL || b->next == NULL) break;
        }
        if(b)
           b->next = reverse(b->next , k);
        return a;    
    }


void print(struct node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main() {
    
    struct node *p;
    
    p = newnode(1);
    p->next = newnode(2);
    p->next->next = newnode(3);
    p->next->next->next = newnode(4);
    p->next->next->next->next = newnode(5);
    p->next->next->next->next->next = newnode(6);
    p = reverse(p , 2);
    print(p);
    
	return 0;
}
