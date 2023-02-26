// C++ program to find a triplet
// from three linked lists with
// sum equal to a given number
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};

/* A utility function to insert
a node at the beginning of a
linked list*/
void push (Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* A function to check if there are three elements in a, b
and c whose sum is equal to givenNumber. The function
assumes that the list b is sorted in ascending order
and c is sorted in descending order. */
void isSumSorted(Node *headA, Node *headB,
				Node *headC, int givenNumber)
{
    map<int , int> mm;
    Node *p = headA;
    while(p != NULL)
    {
        Node *q = headB;
        while(q!=NULL)
        {
            mm[p->data + q->data]++;
            q = q->next;
        }
        p = p->next;
    }
    
    Node *r = headC;
    bool ok = false;
    while(r!=NULL)
    {
        if(mm[givenNumber - r->data])
        {
            ok = true;
            cout << "Found" << endl;
        }
        
        r= r->next;
    }
    
    if(!ok) cout << "Not found" << endl;
    
}


/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node* headA = NULL;
	Node* headB = NULL;
	Node* headC = NULL;

	/*create a linked list 'a' 10->15->5->20 */
	push (&headA, 20);
	push (&headA, 4);
	push (&headA, 15);
	push (&headA, 10);

	/*create a sorted linked list 'b' 2->4->9->10 */
	push (&headB, 10);
	push (&headB, 9);
	push (&headB, 4);
	push (&headB, 2);

	/*create another sorted
	linked list 'c' 8->4->2->1 */
	push (&headC, 1);
	push (&headC, 2);
	push (&headC, 4);
	push (&headC, 8);

	int givenNumber = 925;

	isSumSorted (headA, headB, headC, givenNumber);

	return 0;
}

// This code is contributed by rathbhupendra
