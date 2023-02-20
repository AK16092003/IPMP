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

void reverse(struct node *p)
{
    if(p == NULL) return;
    reverse(p->next);
    cout << p->data << " ";
}

int main() {
    
    struct node *p;
    
    p = newnode(1);
    p->next = newnode(2);
    p->next->next = newnode(3);
    p->next->next->next = newnode(4);
    p->next->next->next->next = newnode(5);
    
    reverse(p);
    
	return 0;
}
