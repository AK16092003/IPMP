#include<bits/stdc++.h>
using namespace std;

struct node 
{
	int data;
	struct node *next;
};

struct node *head = NULL;

struct node * create(int x)
{
	struct node *tmp = (struct node *) malloc(sizeof(struct node));
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

struct node *swappair(struct node *p)
{
	if(p == NULL || p->next == NULL) return p;
	struct node *q = p , *r = p->next , *s = p->next->next;
	r->next = q;
	q->next = swappair(s);
	return r;
}

int main()
{
	head = create(1);
	head->next = create(2);
	head->next->next = create(3);
	head->next->next->next = create(4);
	head->next->next->next->next = create(5);
	
	struct node *p = swappair(head);
	
	while(p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
	
	return 0;
}





